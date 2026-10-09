# SEAL: Secure Element Authentication Label

Chip autentikasi anti-pemalsuan berbasis HMAC-SHA256 yang dibangun di atas baseline
**TT07 SHA-256**. Dirancang untuk PERURI Chip Hackathon 2026, subtema
*Secure Identity & Security Element Chip*, dengan target FPGA Cyclone V
(board  DE10-Nano).

SEAL membuktikan keaslian sebuah barang atau dokumen dengan menunjukkan bahwa ia
memegang kunci rahasia, tanpa pernah mengeluarkan kunci tersebut.

## Status

| Bagian | Status |
|---|---|
| Baseline TT07 (satu ronde SHA-256) | Dipakai tanpa perubahan |
| `sha256_tt07`, `hmac_sha256` | Selesai, lulus uji |
| `secure_store`, `uart`, `protocol`, `auth_chip_top` | Selesai, lulus uji |
| Simulasi seluruh chip (cocotb, Icarus dan Verilator) | 34 uji lulus |
| Estimasi sumber daya (Yosys) | Selesai |
| Sintesis Quartus dan uji di papan DE10-Nano | Direncanakan saat bootcamp |

## Cara kerja

```
Pembaca                      SEAL                          Server
   |  AUTH + nonce (16 B)  ->  |                              |
   |                           |  ctr = ctr + 1               |
   |                           |  TAG = HMAC(K, UID‖nonce‖ctr)|
   |  <- UID, ctr, TAG         |                              |
   |  UID, nonce, ctr, TAG  ------------------------------->  |
   |                           |   K = HMAC(kunci induk, UID) |
   |                           |   hitung ulang TAG, bandingkan
   |  <------------------------------------  asli / palsu    |
```

- **Nonce** dari pembaca selalu baru, sehingga jawaban yang direkam tidak bisa
  diputar ulang.
- **Pencacah** di chip hanya bisa naik, sehingga server dapat mendeteksi chip tiruan
  dengan UID yang sama.
- **Kunci per chip** diturunkan dari kunci induk dan UID. Bocornya satu chip tidak
  membuka chip lain.
- Kunci induk hanya ada di server atau modul keamanan, tidak di alat pembaca.

### Kasus penggunaan

| Penggunaan | Chip dipasang di | Pemeriksa |
|---|---|---|
| Barang kena cukai | Segel karton atau palet | Petugas Bea Cukai, distributor |
| Obat dan alat kesehatan | Label atau segel kemasan | Apotek, rumah sakit |
| Suku cadang dan barang bermerek | Label garansi | Bengkel resmi, toko, pembeli |
| Dokumen berharga | Ijazah, sertifikat, BPKB | Instansi penerbit, bank, notaris |

## Arsitektur

```
auth_chip_top
├── uart              serial 8N1 <-> byte
├── protocol          dekoder perintah, kebijakan akses, penyusun jawaban
├── secure_store      kunci, UID, pencacah, LOCK, respons tamper
└── hmac_sha256       empat kompresi HMAC (ipad, pesan, opad, inner)
    └── sha256_tt07       inti SHA-256 satu blok
        └── tt_um_xeniarose_sha256   baseline TT07, satu ronde
```

| Modul | File | Fungsi |
|---|---|---|
| `tt_um_xeniarose_sha256` | `src/tt07_baseline/project.v` | Baseline TT07: satu ronde SHA-256, register A–H, W, K lewat bus 8 bit |
| `sha256_tt07` | `src/tt07_SHA256.v` | Jadwal pesan, 64 konstanta K, register hash, FSM muat–ronde–baca–hapus |
| `hmac_sha256` | `src/hmac_sha256.v` | HMAC-SHA256 (RFC 2104), latensi konstan 2.593 siklus |
| `secure_store` | `src/secure_store.v` | Kunci 256 bit, UID 64 bit, pencacah 32 bit, LOCK permanen, hapus kunci saat tamper |
| `uart` | `src/uart.v` | Pemancar dan penerima 8N1, bawaan 115200 baud |
| `protocol` | `src/protocol.v` | Lima perintah, kode status, pewaktu perintah tidak lengkap |
| `auth_chip_top` | `src/auth_chip_top.v` | Penyatuan blok, pesan 224 bit, sinyal status |

Kunci di `secure_store` hanya memiliki satu jalur keluar, yaitu ke `hmac_sha256`.
Tidak ada perintah untuk membacanya.

## Antarmuka

### Pin

| Pin | Arah | Fungsi |
|---|---|---|
| `clk` | in | Clock sistem, 50 MHz |
| `rst_n` | in | Reset, aktif rendah |
| `uart_rx` | in | Perintah dari pembaca (115200 baud, 8N1) |
| `tamper_n` | in | Masukan sensor pembongkaran eksternal, aktif rendah |
| `uart_tx` | out | Jawaban ke pembaca |
| `busy` | out | Tinggi selama HMAC dihitung |
| `locked` | out | Tinggi setelah chip dikunci permanen |
| `alarm` | out | Tinggi jika tamper terdeteksi atau pencacah habis |

### Perintah

| Perintah | Kode | Data masuk | Jawaban saat berhasil |
|---|---|---|---|
| GET_UID | `0x01` | — | `00` + UID (8 B) |
| AUTH | `0x02` | nonce (16 B) | `00` + UID (8 B) + pencacah (4 B) + TAG (32 B) |
| WRITE_KEY | `0x10` | kunci (32 B) | `00` |
| WRITE_UID | `0x11` | UID (8 B) | `00` |
| LOCK | `0x1F` | — | `00` |

| Status | Arti |
|---|---|
| `0x00` | Berhasil |
| `0xE1` | Ditolak: sudah terkunci (penulisan, LOCK) atau belum dikunci (AUTH) |
| `0xE2` | Tamper terdeteksi |
| `0xE3` | Perintah tidak dikenal |
| `0xE4` | Pencacah habis |

### Pesan yang di-hash

```
msg = UID (8 B) ‖ nonce (16 B) ‖ pencacah (4 B)        = 28 byte
TAG = SHA256((K ⊕ opad) ‖ SHA256((K ⊕ ipad) ‖ msg))
```

## Kinerja

Hasil simulasi RTL dengan clock 20 ns (50 MHz):

| Parameter | Siklus | Waktu |
|---|---|---|
| Satu ronde SHA-256 | 9 | 180 ns |
| Satu blok SHA-256 | 646 | 12,92 µs |
| Satu HMAC-SHA256 (4 blok) | 2.593 | ±52 µs |
| Penghapusan kunci saat tamper | 3 | 60 ns |

Fase ronde menyumbang 89% waktu blok karena baseline TT07 diakses lewat bus 8 bit:
setiap ronde memerlukan 4 siklus untuk W[t], 4 siklus untuk K[t], dan 1 siklus
eksekusi. Latensi HMAC tidak bergantung pada nilai kunci maupun pesan.

## Sumber daya

Estimasi sintesis Yosys:

| Target | Hasil |
|---|---|
| Intel Cyclone V (`synth_intel_alm`) | 3.969 LUT, 2.542 flip-flop, 0 BRAM, 0 DSP, 0 PLL, 8 pin I/O |
| SkyWater 130 nm (`sky130_fd_sc_hd`) | 11.742 sel, luas sel ±122.113 µm² |

Angka dapat berbeda di Quartus. Analisis timing (Fmax) belum dilakukan.

## Menjalankan simulasi

Kebutuhan: Python 3, cocotb, Verilator atau Icarus Verilog, dan GTKWave.

```bash
sudo apt install make verilator iverilog gtkwave python3-venv
python3 -m venv .venv
source .venv/bin/activate
pip install cocotb
```

Semua testbench sekaligus, dari folder utama:

```bash
make                # Verilator (bawaan)
make SIM=icarus     # Icarus Verilog
make tb-protocol    # satu testbench saja
make clean
```

Keluaran lengkap tiap testbench tersimpan di `tb/<nama>/sim.log`.

Satu tes dengan gelombang, dari folder testbench:

```bash
cd tb/auth_chip_top
make clean
make WAVES=1 COCOTB_TEST_FILTER=test_personalize_and_auth
gtkwave dump.fst
```

## Verifikasi

Setiap hash dan TAG dari RTL dibandingkan dengan `hashlib` dan `hmac` Python.

| Testbench | Uji | Cakupan |
|---|---|---|
| `tt07_SHA256` | 10 | Vektor NIST (FIPS 180-4), batas padding, pesan acak, pola ekstrem, latensi tetap, reset di tengah perhitungan |
| `hmac_sha256` | 9 | Vektor RFC 4231, kunci dan pesan ekstrem, vektor acak, latensi tetap, autentikasi berturut-turut |
| `protocol` | 5 | Dekode perintah, kebijakan akses, kode status, pewaktu (memakai `tb/hmac_stub`) |
| `auth_chip_top` | 10 | Chip kosong, personalisasi dan AUTH, penolakan setelah LOCK, perintah tidak dikenal, latensi, tamper sebelum dan selama HMAC, pencacah habis, reset, kunci tidak pernah muncul di jawaban |

Rangkaian uji terbukti menangkap kesalahan: merusak satu konstanta K menggagalkan
9 dari 10 uji SHA-256, dan merusak pola opad menggagalkan 8 dari 9 uji HMAC.

## Rancangan keamanan

| Ancaman | Mitigasi |
|---|---|
| Replay jawaban lama | Nonce dari pembaca dan pencacah monotonik |
| Pembacaan kunci | Kunci hanya bisa ditulis sebelum LOCK; tidak ada jalur baca |
| Satu chip bocor | Kunci berbeda per chip, diturunkan dari UID |
| Pembongkaran fisik | `tamper_n` menghapus kunci dalam 3 siklus dan menyalakan `alarm`; status bertahan sampai reset |
| Serangan waktu | Latensi HMAC konstan |
| Kloning | Server memeriksa pencacah per UID |

Nilai antara yang dihapus setelah dipakai: register W baseline, jendela pesan
`w_reg`, dan hash dalam.

## Keterbatasan

- **Penyimpanan tidak permanen.** Di FPGA, kunci, UID, dan pencacah hilang saat daya
  mati. Chip sungguhan memerlukan memori non-volatil.
- **Sensor tamper belum dirancang.** Chip hanya menyediakan masukan `tamper_n` untuk
  sensor eksternal, misalnya jalur konduktif pada label yang putus saat dikelupas.
- **Tamper di tengah HMAC.** Protokol langsung menjawab `E2` dan tidak mengirim TAG,
  tetapi inti HMAC tetap menyelesaikan perhitungannya sebelum hasilnya dibuang.
- **Register A–H baseline** belum dihapus setelah tiap blok. Nilainya tidak
  terjangkau dari pin.
- **Belum ada perlindungan analisis daya (DPA).**
- **Antarmuka UART** dipilih untuk purwarupa. Produk label memerlukan NFC, yang bagian
  analognya di luar cakupan proyek ini.

## Rencana berikutnya

1. Sintesis Quartus, penetapan pin, dan analisis timing pada DE10-Nano.
2. Skrip pembaca Python (pyserial) dan uji di papan dengan SignalTap.
3. Sinyal *abort* pada `hmac_sha256` agar perhitungan berhenti saat tamper.
4. Penghapusan register A–H baseline setelah tiap blok.
5. Jalur data 32 bit ke baseline untuk memangkas siklus per ronde.

## Struktur folder

```
HMAC_SHA256/
├── Makefile                  menjalankan semua testbench
├── README.md
├── src/
│   ├── tt07_baseline/
│   │   ├── project.v         baseline TT07, tanpa perubahan
│   │   └── LICENSE           Apache-2.0
│   ├── tt07_SHA256.v         sha256_tt07
│   ├── hmac_sha256.v
│   ├── secure_store.v
│   ├── uart.v
│   ├── protocol.v
│   └── auth_chip_top.v
└── tb/
    ├── tt07_SHA256/          Makefile, tt07_SHA256_tb.py
    ├── hmac_sha256/          Makefile, hmac_sha256_tb.py
    ├── protocol/             Makefile, protocol_tb.py
    ├── auth_chip_top/        Makefile, auth_chip_top_tb.py
    └── hmac_stub/            hmac_stub.v (pengganti HMAC untuk uji protocol)
```

## Atribusi dan lisensi

`src/tt07_baseline/project.v` berasal dari
[xeniarose/tt07-sha256](https://github.com/xeniarose/tt07-sha256)
(hak cipta (c) 2024 xenia dragon, lisensi Apache-2.0), disalin tanpa perubahan
bersama salinan lisensinya.

Kunci dan UID di dalam testbench hanyalah contoh untuk pengujian.
