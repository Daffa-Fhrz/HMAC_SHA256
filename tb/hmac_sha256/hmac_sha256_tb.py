# Testbench cocotb untuk hmac_sha256 (HMAC-SHA256 di atas sha256_tt07).
#
# Model acuan: pustaka hmac dan hashlib dari Python.
# Setiap TAG yang dihitung dicetak berdampingan dengan hasil Python:
#     verilog : <tag dari RTL>
#     python  : <tag dari hmac.new(...)>
#     hasil   : COCOK / BEDA
#
# Menjalankan:  make            (butuh cocotb dan Icarus Verilog)

import hashlib
import hmac
import random

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, RisingEdge

MSG_BYTES = 28                  # UID (8) + angka acak (16) + nomor urut (4)
LATENCY = 2593                  # siklus dari start sampai tag_valid
TIMEOUT_CYCLES = 6000


# ----------------------------------------------------------------------------
# Fungsi bantu
# ----------------------------------------------------------------------------
def make_clock(signal, period_ns=20):
    """Clock 50 MHz. cocotb 2.x memakai 'unit', cocotb 1.x memakai 'units'."""
    try:
        return Clock(signal, period_ns, unit="ns")
    except TypeError:
        return Clock(signal, period_ns, units="ns")


def model(key: bytes, msg: bytes) -> bytes:
    """HMAC-SHA256 acuan. Kunci diisi nol sampai 32 byte, sama seperti di RTL."""
    return hmac.new(key.ljust(32, b"\x00"), msg, hashlib.sha256).digest()


def chip_message(uid: int, nonce: bytes, ctr: int) -> bytes:
    """Pesan dengan format chip: UID (8) || angka acak (16) || nomor urut (4)."""
    assert len(nonce) == 16
    return uid.to_bytes(8, "big") + nonce + ctr.to_bytes(4, "big")


async def setup(dut):
    cocotb.start_soon(make_clock(dut.clk).start())
    dut.start.value = 0
    dut.key.value = 0
    dut.msg.value = 0
    dut.rst_n.value = 0
    await ClockCycles(dut.clk, 5)
    dut.rst_n.value = 1
    await ClockCycles(dut.clk, 2)


async def start_hmac(dut, key: bytes, msg: bytes):
    """Pasang key dan msg, lalu beri pulsa start selama 1 siklus."""
    assert len(msg) == MSG_BYTES and len(key) <= 32
    while int(dut.busy.value) != 0:
        await RisingEdge(dut.clk)
    dut.key.value = int.from_bytes(key.ljust(32, b"\x00"), "big")
    dut.msg.value = int.from_bytes(msg, "big")
    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0


async def wait_tag(dut) -> int:
    """Tunggu tag_valid; kembalikan jumlah siklus sejak pulsa start."""
    for cycles in range(1, TIMEOUT_CYCLES + 1):
        await RisingEdge(dut.clk)
        if int(dut.tag_valid.value) == 1:
            return cycles
    raise AssertionError("tag_valid tidak muncul (timeout)")


async def compute(dut, key: bytes, msg: bytes) -> bytes:
    await start_hmac(dut, key, msg)
    await wait_tag(dut)
    await RisingEdge(dut.clk)
    return int(dut.tag.value).to_bytes(32, "big")


def report(dut, key: bytes, msg: bytes, got: bytes, want: bytes, label: str = ""):
    """Cetak perbandingan hasil Verilog dan Python ke log simulasi."""
    dut._log.info(
        "%skey %s...  msg %s...\n"
        "    verilog : %s\n"
        "    python  : %s\n"
        "    hasil   : %s",
        f"[{label}] " if label else "",
        key.ljust(32, b"\x00").hex()[:16], msg.hex()[:16],
        got.hex(), want.hex(), "COCOK" if got == want else "BEDA")


async def check(dut, key: bytes, msg: bytes, label: str = "") -> bytes:
    got = await compute(dut, key, msg)
    want = model(key, msg)
    report(dut, key, msg, got, want, label)
    assert got == want, f"{label}: dapat {got.hex()}, seharusnya {want.hex()}"
    return got


# ----------------------------------------------------------------------------
# Uji
# ----------------------------------------------------------------------------
@cocotb.test()
async def test_reset(dut):
    """Setelah reset: busy = 0, tag_valid = 0, tag = 0."""
    await setup(dut)
    assert int(dut.busy.value) == 0
    assert int(dut.tag_valid.value) == 0
    assert int(dut.tag.value) == 0


@cocotb.test()
async def test_rfc4231_case2(dut):
    """Vektor resmi RFC 4231 test case 2 (pesannya tepat 28 byte)."""
    await setup(dut)
    key = b"Jefe"
    msg = b"what do ya want for nothing?"
    expected = "5bdcc146bf60754e6a042426089575c75a003f089d2739839dec58b964ec3843"
    got = await compute(dut, key, msg)
    report(dut, key, msg, got, model(key, msg), "RFC 4231 TC2")
    assert model(key, msg).hex() == expected, "model Python tidak sama dengan RFC"
    assert got.hex() == expected


@cocotb.test()
async def test_extreme_values(dut):
    """Kunci dan pesan ekstrem: semua nol, semua satu, sama dengan pola ipad/opad."""
    await setup(dut)
    cases = [
        (bytes(32), bytes(MSG_BYTES)),
        (b"\xff" * 32, b"\xff" * MSG_BYTES),
        (b"\x36" * 32, b"\x5c" * MSG_BYTES),     # kunci XOR ipad = nol
        (b"\x5c" * 32, b"\x36" * MSG_BYTES),     # kunci XOR opad = nol
        (bytes(31) + b"\x01", bytes(MSG_BYTES)),
    ]
    for key, msg in cases:
        await check(dut, key, msg, "ekstrem")


@cocotb.test()
async def test_random_vectors(dut):
    """Kunci dan pesan acak, dibandingkan dengan pustaka hmac Python."""
    await setup(dut)
    rng = random.Random(2026)
    for _ in range(20):
        key = bytes(rng.getrandbits(8) for _ in range(32))
        msg = bytes(rng.getrandbits(8) for _ in range(MSG_BYTES))
        await check(dut, key, msg, "acak")


@cocotb.test()
async def test_chip_message_format(dut):
    """Format pesan chip: UID || angka acak || nomor urut. Mengubah salah satu
    bagian harus mengubah TAG."""
    await setup(dut)
    rng = random.Random(8)
    key = bytes(rng.getrandbits(8) for _ in range(32))
    uid = 0x5045525552490001
    nonce = bytes(rng.getrandbits(8) for _ in range(16))

    base = await check(dut, key, chip_message(uid, nonce, 1), "chip")
    other_ctr = await check(dut, key, chip_message(uid, nonce, 2), "nomor urut +1")
    other_uid = await check(dut, key, chip_message(uid + 1, nonce, 1), "UID lain")
    other_nonce = await check(dut, key, chip_message(uid, bytes(16), 1), "angka acak lain")
    other_key = await check(dut, key[:-1] + bytes([key[-1] ^ 1]),
                            chip_message(uid, nonce, 1), "kunci beda 1 bit")
    assert len({base, other_ctr, other_uid, other_nonce, other_key}) == 5


@cocotb.test()
async def test_latency_and_handshake(dut):
    """Latensi tetap 2593 siklus untuk data apa pun, busy tinggi selama bekerja,
    tag_valid hanya 1 siklus, dan tag bertahan setelahnya."""
    await setup(dut)
    rng = random.Random(3)
    cases = [(bytes(32), bytes(MSG_BYTES)), (b"\xff" * 32, b"\xff" * MSG_BYTES)]
    cases += [(bytes(rng.getrandbits(8) for _ in range(32)),
               bytes(rng.getrandbits(8) for _ in range(MSG_BYTES))) for _ in range(2)]

    for key, msg in cases:
        await start_hmac(dut, key, msg)
        await RisingEdge(dut.clk)
        cycles = 1
        while int(dut.tag_valid.value) != 1:
            if cycles > 1:
                assert int(dut.busy.value) == 1, "busy harus 1 selama bekerja"
            await RisingEdge(dut.clk)
            cycles += 1
            assert cycles <= TIMEOUT_CYCLES, "timeout"
        assert cycles == LATENCY, f"latensi {cycles}, seharusnya {LATENCY}"

        tag = int(dut.tag.value)
        assert tag.to_bytes(32, "big") == model(key, msg)
        await RisingEdge(dut.clk)
        assert int(dut.tag_valid.value) == 0, "tag_valid harus 1 siklus saja"
        assert int(dut.busy.value) == 0
        for _ in range(20):
            await RisingEdge(dut.clk)
            assert int(dut.tag.value) == tag, "tag berubah saat idle"
    dut._log.info("latensi HMAC = %d siklus untuk semua data", LATENCY)


@cocotb.test()
async def test_start_ignored_while_busy(dut):
    """Pulsa start saat modul sibuk harus diabaikan."""
    await setup(dut)
    key, msg = b"k" * 32, b"m" * MSG_BYTES
    await start_hmac(dut, key, msg)
    await ClockCycles(dut.clk, 500)
    assert int(dut.busy.value) == 1
    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0
    await wait_tag(dut)
    await RisingEdge(dut.clk)
    got = int(dut.tag.value).to_bytes(32, "big")
    report(dut, key, msg, got, model(key, msg), "start saat sibuk")
    assert got == model(key, msg)


@cocotb.test()
async def test_back_to_back(dut):
    """Beberapa autentikasi berturut-turut dengan kunci sama dan nomor urut naik."""
    await setup(dut)
    key = bytes(range(32))
    nonce = bytes(range(16, 32))
    tags = set()
    for ctr in range(1, 6):
        tags.add(await check(dut, key, chip_message(0xA1B2C3D4E5F60708, nonce, ctr),
                             f"ctr={ctr}"))
    assert len(tags) == 5, "TAG harus berbeda untuk tiap nomor urut"


@cocotb.test()
async def test_reset_mid_computation(dut):
    """Reset di tengah perhitungan: modul kembali siap dan hasil berikutnya benar."""
    await setup(dut)
    await start_hmac(dut, b"\x11" * 32, b"\x22" * MSG_BYTES)
    await ClockCycles(dut.clk, 1000)
    assert int(dut.busy.value) == 1

    dut.rst_n.value = 0
    await ClockCycles(dut.clk, 3)
    dut.rst_n.value = 1
    await ClockCycles(dut.clk, 2)
    assert int(dut.busy.value) == 0
    assert int(dut.tag.value) == 0

    await check(dut, b"Jefe", b"what do ya want for nothing?", "setelah reset")
