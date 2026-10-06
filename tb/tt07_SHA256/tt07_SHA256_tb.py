# Testbench cocotb untuk sha256_tt07 (core SHA-256 lengkap di atas baseline TT07).
#
# Model acuan: hashlib.sha256 dari pustaka standar Python.
# Padding pesan dikerjakan di sini, karena core menerima blok 512 bit yang
# sudah di-padding.
#
# Menjalankan:  make            (di folder ini, butuh cocotb dan Icarus Verilog)

import hashlib
import random

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, RisingEdge

IV = 0x6A09E667BB67AE853C6EF372A54FF53A510E527F9B05688C1F83D9AB5BE0CD19
CYCLES_PER_BLOCK = 646          # pulsa init/next -> digest_valid
TIMEOUT_CYCLES = 2000           # batas tunggu per blok


# ----------------------------------------------------------------------------
# Fungsi bantu
# ----------------------------------------------------------------------------
def make_clock(signal, period_ns=20):
    """Clock 50 MHz. cocotb 2.x memakai 'unit', cocotb 1.x memakai 'units'."""
    try:
        return Clock(signal, period_ns, unit="ns")
    except TypeError:
        return Clock(signal, period_ns, units="ns")


def pad(message: bytes) -> bytes:
    """Padding SHA-256: 0x80, nol, lalu panjang pesan 64 bit (big-endian)."""
    zeros = (55 - len(message)) % 64
    return message + b"\x80" + b"\x00" * zeros + (8 * len(message)).to_bytes(8, "big")


async def setup(dut):
    """Nyalakan clock dan reset DUT."""
    cocotb.start_soon(make_clock(dut.clk).start())
    dut.init.value = 0
    dut.next.value = 0
    dut.block.value = 0
    dut.rst_n.value = 0
    await ClockCycles(dut.clk, 5)
    dut.rst_n.value = 1
    await ClockCycles(dut.clk, 2)


async def start_block(dut, block: bytes, first: bool):
    """Kirim satu blok: pulsa init (blok pertama) atau next selama 1 siklus."""
    assert len(block) == 64
    while int(dut.ready.value) != 1:
        await RisingEdge(dut.clk)
    dut.block.value = int.from_bytes(block, "big")
    dut.init.value = 1 if first else 0
    dut.next.value = 0 if first else 1
    await RisingEdge(dut.clk)
    dut.init.value = 0
    dut.next.value = 0


async def wait_digest(dut) -> int:
    """Tunggu digest_valid; kembalikan jumlah siklus sejak pulsa init/next."""
    for cycles in range(1, TIMEOUT_CYCLES + 1):
        await RisingEdge(dut.clk)
        if int(dut.digest_valid.value) == 1:
            return cycles
    raise AssertionError("digest_valid tidak muncul (timeout)")


async def run_block(dut, block: bytes, first: bool) -> int:
    await start_block(dut, block, first)
    return await wait_digest(dut)


async def sha256(dut, message: bytes) -> bytes:
    """Hitung SHA-256 sebuah pesan dengan DUT."""
    padded = pad(message)
    for i in range(0, len(padded), 64):
        await run_block(dut, padded[i:i + 64], first=(i == 0))
    await RisingEdge(dut.clk)
    return int(dut.digest.value).to_bytes(32, "big")


async def check(dut, message: bytes, label: str = ""):
    got = await sha256(dut, message)
    want = hashlib.sha256(message).digest()
    assert got == want, (
        f"{label or 'pesan'} ({len(message)} byte): "
        f"dapat {got.hex()}, seharusnya {want.hex()}")


# ----------------------------------------------------------------------------
# Uji
# ----------------------------------------------------------------------------
@cocotb.test()
async def test_reset(dut):
    """Setelah reset: ready = 1, digest_valid = 0, digest = nilai awal (IV)."""
    await setup(dut)
    assert int(dut.ready.value) == 1
    assert int(dut.digest_valid.value) == 0
    assert int(dut.digest.value) == IV


@cocotb.test()
async def test_nist_vectors(dut):
    """Vektor uji resmi FIPS 180-4 / NIST, nilai digest ditulis eksplisit."""
    await setup(dut)
    vectors = [
        (b"",
         "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855"),
        (b"abc",
         "ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad"),
        (b"abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopq",
         "248d6a61d20638b8e5c026930c3e6039a33ce45964ff2167f6ecedd419db06c1"),
        (b"abcdefghbcdefghicdefghijdefghijkefghijklfghijklmghijklmn"
         b"hijklmnoijklmnopjklmnopqklmnopqrlmnopqrsmnopqrstnopqrstu",
         "cf5b16a778af8380036ce59e7b0492370b249b11e8f07a51afac45037afee9d1"),
    ]
    for message, expected in vectors:
        got = await sha256(dut, message)
        assert got.hex() == expected, f"{message!r}: dapat {got.hex()}"
        dut._log.info("LULUS %d byte -> %s...", len(message), expected[:16])


@cocotb.test()
async def test_padding_boundaries(dut):
    """Panjang pesan di sekitar batas padding (55/56 byte) dan batas blok (64)."""
    await setup(dut)
    rng = random.Random(7)
    for length in (1, 54, 55, 56, 57, 63, 64, 65, 119, 120, 128):
        await check(dut, bytes(rng.getrandbits(8) for _ in range(length)), "batas")


@cocotb.test()
async def test_random_messages(dut):
    """Pesan acak dengan panjang acak 0..200 byte, dibandingkan dengan hashlib."""
    await setup(dut)
    rng = random.Random(2026)
    for _ in range(25):
        length = rng.randint(0, 200)
        await check(dut, bytes(rng.getrandbits(8) for _ in range(length)), "acak")


@cocotb.test()
async def test_extreme_blocks(dut):
    """Pola data ekstrem: semua nol, semua satu, dan selang-seling."""
    await setup(dut)
    for pattern in (b"\x00", b"\xff", b"\x55", b"\xaa"):
        await check(dut, pattern * 64, "pola")
        await check(dut, pattern * 55, "pola")


@cocotb.test()
async def test_latency_and_handshake(dut):
    """Latensi tetap 646 siklus/blok, ready turun selama sibuk,
    digest_valid hanya berdenyut 1 siklus, dan digest stabil sampai blok berikutnya."""
    await setup(dut)
    padded = pad(b"abc")

    await start_block(dut, padded, first=True)
    await RisingEdge(dut.clk)                   # DUT mengambil init di tepi ini
    await RisingEdge(dut.clk)
    assert int(dut.ready.value) == 0, "ready harus 0 selama core bekerja"

    cycles = 2
    while int(dut.digest_valid.value) != 1:
        assert int(dut.ready.value) == 0
        await RisingEdge(dut.clk)
        cycles += 1
        assert cycles <= TIMEOUT_CYCLES, "timeout"
    assert cycles == CYCLES_PER_BLOCK, f"latensi {cycles}, seharusnya {CYCLES_PER_BLOCK}"
    dut._log.info("latensi per blok = %d siklus", cycles)

    digest = int(dut.digest.value)
    assert digest.to_bytes(32, "big") == hashlib.sha256(b"abc").digest()

    await RisingEdge(dut.clk)
    assert int(dut.digest_valid.value) == 0, "digest_valid harus 1 siklus saja"
    assert int(dut.ready.value) == 1
    for _ in range(50):
        await RisingEdge(dut.clk)
        assert int(dut.digest_valid.value) == 0
        assert int(dut.digest.value) == digest, "digest berubah saat idle"

    # latensi tidak boleh bergantung pada data (tidak ada bocoran lewat waktu)
    for block in (bytes(64), b"\xff" * 64, pad(b"\x80" * 55)):
        assert await run_block(dut, block, first=True) == CYCLES_PER_BLOCK


@cocotb.test()
async def test_block_sampled_only_at_start(dut):
    """Masukan block hanya dibaca saat pulsa init/next; perubahan setelahnya
    tidak boleh memengaruhi hasil."""
    await setup(dut)
    await start_block(dut, pad(b"abc"), first=True)
    await RisingEdge(dut.clk)
    rng = random.Random(1)
    for _ in range(TIMEOUT_CYCLES):
        dut.block.value = rng.getrandbits(512)   # ganggu masukan tiap siklus
        await RisingEdge(dut.clk)
        if int(dut.digest_valid.value) == 1:
            break
    else:
        raise AssertionError("timeout")
    assert int(dut.digest.value).to_bytes(32, "big") == hashlib.sha256(b"abc").digest()


@cocotb.test()
async def test_start_ignored_while_busy(dut):
    """Pulsa init/next saat core sibuk harus diabaikan."""
    await setup(dut)
    await start_block(dut, pad(b"abc"), first=True)
    await ClockCycles(dut.clk, 100)
    assert int(dut.ready.value) == 0

    dut.block.value = int.from_bytes(pad(b"pengganggu"), "big")
    dut.init.value = 1
    await RisingEdge(dut.clk)
    dut.init.value = 0
    dut.next.value = 1
    await RisingEdge(dut.clk)
    dut.next.value = 0

    await wait_digest(dut)
    assert int(dut.digest.value).to_bytes(32, "big") == hashlib.sha256(b"abc").digest()


@cocotb.test()
async def test_init_restarts_from_iv(dut):
    """init harus memulai dari IV walaupun sebelumnya ada pesan multi-blok."""
    await setup(dut)
    await check(dut, b"x" * 150, "multi-blok")
    await check(dut, b"abc", "setelah multi-blok")
    await check(dut, b"abc", "ulang")


@cocotb.test()
async def test_reset_mid_hash(dut):
    """Reset di tengah perhitungan: core kembali siap dan hash berikutnya benar."""
    await setup(dut)
    await start_block(dut, pad(b"akan dibatalkan"), first=True)
    await ClockCycles(dut.clk, 300)
    assert int(dut.ready.value) == 0

    dut.rst_n.value = 0
    await ClockCycles(dut.clk, 3)
    dut.rst_n.value = 1
    await ClockCycles(dut.clk, 2)
    assert int(dut.ready.value) == 1
    assert int(dut.digest.value) == IV

    await check(dut, b"abc", "setelah reset")