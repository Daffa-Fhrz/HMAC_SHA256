# Testbench cocotb untuk protocol sendirian: batas waktu data terpotong dan
# byte yang datang saat sibuk. Aliran byte dikemudikan langsung (tanpa uart).
# TIMEOUT_CYCLES diperkecil lewat Makefile supaya simulasi singkat.

import os

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, RisingEdge

TIMEOUT = int(os.environ.get("TB_TIMEOUT", "300"))
UID = 0x1122334455667788


def make_clock(signal):
    try:
        return Clock(signal, 20, unit="ns")
    except TypeError:
        return Clock(signal, 20, units="ns")


async def setup(dut):
    cocotb.start_soon(make_clock(dut.clk).start())
    dut.rx_data.value = 0
    dut.rx_valid.value = 0
    dut.tx_ready.value = 1
    dut.tag.value = 0
    dut.tag_valid.value = 0
    dut.uid.value = UID
    dut.ctr.value = 0
    dut.locked.value = 0
    dut.tamper.value = 0
    dut.ctr_full.value = 0
    dut.rst_n.value = 0
    await ClockCycles(dut.clk, 3)
    dut.rst_n.value = 1
    await ClockCycles(dut.clk, 2)


async def push(dut, data: bytes, gap: int = 3):
    for byte in data:
        dut.rx_data.value = byte
        dut.rx_valid.value = 1
        await RisingEdge(dut.clk)
        dut.rx_valid.value = 0
        await ClockCycles(dut.clk, gap)


async def collect(dut, cycles: int) -> bytes:
    """Kumpulkan byte yang dikirim protocol selama sejumlah siklus."""
    out = []
    for _ in range(cycles):
        await RisingEdge(dut.clk)
        if int(dut.tx_valid.value) == 1 and int(dut.tx_ready.value) == 1:
            out.append(int(dut.tx_data.value))
    return bytes(out)


@cocotb.test()
async def test_truncated_command_times_out(dut):
    """Data terpotong dibuang tanpa jawaban setelah batas waktu; perintah
    berikutnya dilayani normal."""
    await setup(dut)
    await push(dut, bytes([0x02]) + b"\xaa" * 5)            # AUTH dengan 5 dari 16 byte
    silent = await collect(dut, TIMEOUT + 50)
    assert silent == b"", f"seharusnya tanpa jawaban, dapat {silent.hex()}"

    cocotb.start_soon(push(dut, bytes([0x01])))             # GET_UID
    resp = await collect(dut, 40)
    assert resp == bytes([0x00]) + UID.to_bytes(8, "big"), resp.hex()


@cocotb.test()
async def test_slow_but_complete_command(dut):
    """Jeda antar-byte di bawah batas waktu tidak membatalkan perintah."""
    await setup(dut)
    cocotb.start_soon(push(dut, bytes([0x11]) + bytes(range(8)), gap=TIMEOUT - 20))
    resp = await collect(dut, 9 * TIMEOUT + 50)
    assert resp == bytes([0x00]), resp.hex()
    assert int(dut.wr_data.value) == 0, "register data harus dihapus setelah perintah"


@cocotb.test()
async def test_write_pulses_and_data(dut):
    """WRITE_KEY: key_we tepat 1 siklus, wr_data berisi kunci pada siklus itu,
    lalu register data dihapus."""
    await setup(dut)
    key = bytes(range(1, 33))
    cocotb.start_soon(push(dut, bytes([0x10]) + key, gap=1))
    pulses, seen = 0, None
    for _ in range(120):
        await RisingEdge(dut.clk)
        if int(dut.key_we.value) == 1:
            pulses += 1
            seen = int(dut.wr_data.value)
    assert pulses == 1, f"key_we berdenyut {pulses} siklus"
    assert seen == int.from_bytes(key, "big")
    assert int(dut.wr_data.value) == 0


@cocotb.test()
async def test_bytes_ignored_while_responding(dut):
    """Byte yang datang saat jawaban sedang dikirim diabaikan."""
    await setup(dut)
    dut.tx_ready.value = 0                                  # tahan jawaban
    await push(dut, bytes([0x01]))                          # GET_UID
    await push(dut, bytes([0x1F, 0x10, 0x02]))              # datang saat sibuk
    assert int(dut.lock_set.value) == 0
    dut.tx_ready.value = 1
    resp = await collect(dut, 40)
    assert resp == bytes([0x00]) + UID.to_bytes(8, "big"), resp.hex()
    assert await collect(dut, 40) == b""


@cocotb.test()
async def test_stalled_tx_ready(dut):
    """tx_ready yang tersendat tidak menghilangkan atau menggandakan byte."""
    await setup(dut)
    dut.tx_ready.value = 0
    await push(dut, bytes([0x01]))
    out = []
    for i in range(200):
        dut.tx_ready.value = 1 if i % 7 == 0 else 0
        await RisingEdge(dut.clk)
        if int(dut.tx_valid.value) == 1 and int(dut.tx_ready.value) == 1:
            out.append(int(dut.tx_data.value))
    assert bytes(out) == bytes([0x00]) + UID.to_bytes(8, "big"), bytes(out).hex()
