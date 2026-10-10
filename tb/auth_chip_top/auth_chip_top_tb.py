# Testbench cocotb untuk auth_chip_top: chip lengkap dengan hmac_sha256 ASLI
# (bukan stub), diuji hanya lewat pin: uart_rx, uart_tx, tamper_n, dan LED.
#
# TAG dari chip dibandingkan dengan pustaka hmac Python.
#
# Menjalankan:
#   make                 BAUD dipercepat (5.000.000) supaya simulasi singkat
#   make BAUD=115200     laju bit sungguhan (lambat, sekitar 2 menit)

import hashlib
import hmac
import os
import random

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, FallingEdge, RisingEdge, Timer

CLK_HZ = 50_000_000
CLK_NS = 20
BAUD = int(os.environ.get("TB_BAUD", "5000000"))
DIV = CLK_HZ // BAUD                    # siklus clock per bit, sama dengan di uart.v
BIT_NS = DIV * CLK_NS

GET_UID, AUTH, WRITE_KEY, WRITE_UID, LOCK = 0x01, 0x02, 0x10, 0x11, 0x1F
OK, E_LOCK, E_TAMPER, E_BADCMD, E_CTR = 0x00, 0xE1, 0xE2, 0xE3, 0xE4

UID = bytes.fromhex("5045525552490001")
KEY = bytes(range(0x40, 0x60))          # kunci contoh 32 byte


def timer_ns(ns):
    try:
        return Timer(ns, unit="ns")
    except TypeError:
        return Timer(ns, units="ns")


def make_clock(signal):
    try:
        return Clock(signal, CLK_NS, unit="ns")
    except TypeError:
        return Clock(signal, CLK_NS, units="ns")


def model_tag(key: bytes, uid: bytes, nonce: bytes, ctr: int) -> bytes:
    return hmac.new(key, uid + nonce + ctr.to_bytes(4, "big"), hashlib.sha256).digest()


class Reader:
    """Model alat pembaca: mengirim byte ke uart_rx dan mengumpulkan byte dari uart_tx."""

    def __init__(self, dut):
        self.dut = dut
        self.rx = []
        cocotb.start_soon(self._monitor())

    async def send(self, data: bytes):
        for byte in data:
            self.dut.uart_rx.value = 0                      # bit mulai
            await timer_ns(BIT_NS)
            for i in range(8):                              # bit terendah dulu
                self.dut.uart_rx.value = (byte >> i) & 1
                await timer_ns(BIT_NS)
            self.dut.uart_rx.value = 1                      # bit berhenti
            await timer_ns(BIT_NS)

    async def _monitor(self):
        while True:
            await FallingEdge(self.dut.uart_tx)
            await timer_ns(BIT_NS + BIT_NS // 2)            # tengah bit data pertama
            value = 0
            for i in range(8):
                value |= int(self.dut.uart_tx.value) << i
                await timer_ns(BIT_NS)
            assert int(self.dut.uart_tx.value) == 1, "bit berhenti uart_tx tidak tinggi"
            self.rx.append(value)

    async def recv(self, n: int) -> bytes:
        """Tunggu n byte jawaban, lalu pastikan tidak ada byte lebih."""
        budget = (3500 + (n + 3) * 10 * DIV) * CLK_NS       # HMAC + waktu kirim
        waited = 0
        while len(self.rx) < n:
            await timer_ns(BIT_NS)
            waited += BIT_NS
            assert waited < budget, f"hanya {len(self.rx)} dari {n} byte jawaban yang datang"
        await timer_ns(12 * BIT_NS)
        assert len(self.rx) == n, f"jawaban {len(self.rx)} byte, seharusnya {n}: {bytes(self.rx).hex()}"
        out = bytes(self.rx)
        self.rx.clear()
        return out

    async def cmd(self, payload: bytes, n_resp: int) -> bytes:
        await self.send(payload)
        return await self.recv(n_resp)


async def setup(dut) -> Reader:
    cocotb.start_soon(make_clock(dut.clk).start())
    dut.uart_rx.value = 1
    dut.tamper_n.value = 1
    dut.rst_n.value = 0
    await ClockCycles(dut.clk, 5)
    dut.rst_n.value = 1
    await ClockCycles(dut.clk, 5)
    return Reader(dut)


async def personalize(reader: Reader, uid=UID, key=KEY):
    """Urutan pabrik: WRITE_UID, WRITE_KEY, LOCK."""
    assert await reader.cmd(bytes([WRITE_UID]) + uid, 1) == bytes([OK])
    assert await reader.cmd(bytes([WRITE_KEY]) + key, 1) == bytes([OK])
    assert await reader.cmd(bytes([LOCK]), 1) == bytes([OK])


async def auth(dut, reader: Reader, nonce: bytes, key=KEY, label="AUTH"):
    """Satu AUTH yang diharapkan berhasil; kembalikan (uid, ctr, tag)."""
    resp = await reader.cmd(bytes([AUTH]) + nonce, 45)
    status, uid, ctr, tag = resp[0], resp[1:9], int.from_bytes(resp[9:13], "big"), resp[13:]
    want = model_tag(key, uid, nonce, ctr)
    dut._log.info(
        "[%s] UID %s  nomor urut %d  angka acak %s...\n"
        "    chip   : %s\n"
        "    python : %s\n"
        "    hasil  : %s",
        label, uid.hex(), ctr, nonce.hex()[:16], tag.hex(), want.hex(),
        "COCOK" if tag == want else "BEDA")
    assert status == OK
    assert tag == want, "TAG chip tidak sama dengan HMAC Python"
    return uid, ctr, tag


# ----------------------------------------------------------------------------
@cocotb.test()
async def test_blank_chip(dut):
    """Chip kosong: pin diam, GET_UID nol, AUTH ditolak karena belum dikunci."""
    reader = await setup(dut)
    assert int(dut.uart_tx.value) == 1
    assert int(dut.busy.value) == 0 and int(dut.locked.value) == 0 and int(dut.alarm.value) == 0
    assert await reader.cmd(bytes([GET_UID]), 9) == bytes([OK]) + bytes(8)
    assert await reader.cmd(bytes([AUTH]) + bytes(16), 1) == bytes([E_LOCK])
    assert int(dut.busy.value) == 0


@cocotb.test()
async def test_personalize_and_auth(dut):
    """Urutan pabrik lalu beberapa AUTH; TAG dibandingkan dengan Python."""
    reader = await setup(dut)
    await personalize(reader)
    assert int(dut.locked.value) == 1 and int(dut.alarm.value) == 0
    assert await reader.cmd(bytes([GET_UID]), 9) == bytes([OK]) + UID

    rng = random.Random(2026)
    tags = set()
    for expected_ctr in (1, 2, 3):
        nonce = bytes(rng.getrandbits(8) for _ in range(16))
        uid, ctr, tag = await auth(dut, reader, nonce)
        assert uid == UID
        assert ctr == expected_ctr, f"nomor urut {ctr}, seharusnya {expected_ctr}"
        tags.add(tag)
    assert len(tags) == 3

    # angka acak yang sama dua kali tetap menghasilkan TAG berbeda (nomor urut naik)
    nonce = bytes(16)
    _, _, tag_a = await auth(dut, reader, nonce, label="angka acak sama")
    _, _, tag_b = await auth(dut, reader, nonce, label="angka acak sama")
    assert tag_a != tag_b


@cocotb.test()
async def test_write_rejected_after_lock(dut):
    """Setelah LOCK: penulisan dan LOCK ditolak E1, kunci lama tetap dipakai."""
    reader = await setup(dut)
    await personalize(reader)
    assert await reader.cmd(bytes([WRITE_KEY]) + b"\xee" * 32, 1) == bytes([E_LOCK])
    assert await reader.cmd(bytes([WRITE_UID]) + b"\xee" * 8, 1) == bytes([E_LOCK])
    assert await reader.cmd(bytes([LOCK]), 1) == bytes([E_LOCK])
    uid, ctr, _ = await auth(dut, reader, b"\x5a" * 16, label="setelah tulis ditolak")
    assert uid == UID and ctr == 1


@cocotb.test()
async def test_unknown_command(dut):
    """Kode perintah tidak dikenal dijawab E3, lalu chip tetap bekerja."""
    reader = await setup(dut)
    for code in (0x00, 0x03, 0x55, 0xFF):
        assert await reader.cmd(bytes([code]), 1) == bytes([E_BADCMD])
    assert await reader.cmd(bytes([GET_UID]), 9) == bytes([OK]) + bytes(8)


@cocotb.test()
async def test_auth_latency(dut):
    """busy tinggi tepat selama HMAC (sekitar 2593 siklus)."""
    reader = await setup(dut)
    await personalize(reader)
    cocotb.start_soon(reader.send(bytes([AUTH]) + bytes(16)))
    await RisingEdge(dut.busy)
    cycles = 0
    while int(dut.busy.value) == 1:
        await RisingEdge(dut.clk)
        cycles += 1
    dut._log.info("busy tinggi selama %d siklus", cycles)
    assert 2580 <= cycles <= 2600
    resp = await reader.recv(45)
    assert resp[0] == OK


@cocotb.test()
async def test_tamper(dut):
    """Pulsa tamper 1 siklus: alarm menyala, AUTH dan penulisan dijawab E2."""
    reader = await setup(dut)
    await personalize(reader)
    await auth(dut, reader, b"\x01" * 16, label="sebelum tamper")

    await RisingEdge(dut.clk)
    dut.tamper_n.value = 0
    await RisingEdge(dut.clk)
    dut.tamper_n.value = 1
    await ClockCycles(dut.clk, 5)
    assert int(dut.alarm.value) == 1

    assert await reader.cmd(bytes([AUTH]) + b"\x02" * 16, 1) == bytes([E_TAMPER])
    assert await reader.cmd(bytes([WRITE_KEY]) + KEY, 1) == bytes([E_TAMPER])
    assert await reader.cmd(bytes([LOCK]), 1) == bytes([E_TAMPER])
    assert await reader.cmd(bytes([GET_UID]), 9) == bytes([OK]) + UID
    assert int(dut.alarm.value) == 1, "alarm harus tetap menyala"


@cocotb.test()
async def test_tamper_during_auth(dut):
    """Tamper saat HMAC berjalan: jawabannya E2 saja, bukan TAG."""
    reader = await setup(dut)
    await personalize(reader)
    cocotb.start_soon(reader.send(bytes([AUTH]) + b"\x33" * 16))
    await RisingEdge(dut.busy)
    await ClockCycles(dut.clk, 800)
    dut.tamper_n.value = 0
    await ClockCycles(dut.clk, 2)
    dut.tamper_n.value = 1
    assert await reader.recv(1) == bytes([E_TAMPER])
    await ClockCycles(dut.clk, 3000)
    assert len(reader.rx) == 0, "tidak boleh ada TAG yang menyusul"


@cocotb.test()
async def test_counter_exhausted(dut):
    """Nomor urut habis: AUTH terakhir memakai 0xFFFFFFFF, berikutnya dijawab E4.
    Register nomor urut diisi langsung dari testbench untuk mempersingkat."""
    reader = await setup(dut)
    await personalize(reader)
    dut.u_store.ctr_reg.value = 0xFFFFFFFE
    await ClockCycles(dut.clk, 2)
    _, ctr, _ = await auth(dut, reader, b"\x44" * 16, label="nomor urut terakhir")
    assert ctr == 0xFFFFFFFF
    assert int(dut.alarm.value) == 1
    assert await reader.cmd(bytes([AUTH]) + b"\x45" * 16, 1) == bytes([E_CTR])


@cocotb.test()
async def test_reset_wipes_chip(dut):
    """Reset mengosongkan chip: UID nol, tidak terkunci, AUTH ditolak."""
    reader = await setup(dut)
    await personalize(reader)
    dut.rst_n.value = 0
    await ClockCycles(dut.clk, 5)
    dut.rst_n.value = 1
    await ClockCycles(dut.clk, 5)
    assert int(dut.locked.value) == 0
    assert await reader.cmd(bytes([GET_UID]), 9) == bytes([OK]) + bytes(8)
    assert await reader.cmd(bytes([AUTH]) + bytes(16), 1) == bytes([E_LOCK])


@cocotb.test()
async def test_key_not_in_any_response(dut):
    """Tidak ada jawaban yang memuat potongan kunci."""
    reader = await setup(dut)
    key = bytes.fromhex("c0ffee11deadbeef0badf00dfeedface0123456789abcdef1122334455667788")
    seen = b""
    assert await reader.cmd(bytes([WRITE_UID]) + UID, 1) == bytes([OK])
    assert await reader.cmd(bytes([WRITE_KEY]) + key, 1) == bytes([OK])
    seen += await reader.cmd(bytes([GET_UID]), 9)
    assert await reader.cmd(bytes([LOCK]), 1) == bytes([OK])
    for code in (GET_UID, 0x10, 0x7F):
        payload = bytes([code]) + (b"\x00" * 32 if code == 0x10 else b"")
        seen += await reader.cmd(payload, 9 if code == GET_UID else 1)
    resp = await reader.cmd(bytes([AUTH]) + bytes(16), 45)
    assert resp[13:] == model_tag(key, UID, bytes(16), 1)
    seen += resp
    for i in range(len(key) - 3):
        assert key[i:i + 4] not in seen, "potongan kunci muncul di jawaban"
