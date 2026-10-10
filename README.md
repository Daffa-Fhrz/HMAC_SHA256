# Chip Autentikasi Anti-Pemalsuan Berbasis HMAC-SHA256

Desain chip untuk PERURI Chip Hackathon, tema *Secure Identity & Security Element Chip*.
Chip ini membuktikan keaslian sebuah barang (pita cukai, meterai, dokumen berharga)
dengan menunjukkan bahwa ia memegang kunci rahasia, tanpa pernah mengirim kunci itu.

Desain dikembangkan dari baseline **TT07 tiny sha256** dan ditargetkan ke FPGA
Cyclone V (papan DE10-Nano).

## Status

| Bagian | Status |
|---|---|
| Baseline TT07 (satu ronde SHA-256) | Dipakai apa adanya |
| `sha256_tt07` (SHA-256 penuh di atas baseline) | Selesai, lulus 10 uji cocotb |
| `hmac_sha256` (HMAC-SHA256) | Selesai, lulus 9 uji cocotb |
| `secure_store`, `protocol`, `uart`, `auth_chip_top` | Belum dibuat |
| Sintesis Quartus dan uji di papan DE10-Nano | Belum dilakukan |

## Fungsi

Chip menjawab "soal" dari alat pembaca dengan kode yang hanya bisa dihitung oleh
pemegang kunci:

1. Alat pembaca mengirim angka acak 16 byte.
2. Chip menggabungkan UID, angka acak itu, dan nomor urut pemakaian, lalu menghitung
   HMAC-SHA256 dengan kunci rahasianya.
3. Chip mengirim UID, nomor urut, dan hasil HMAC (TAG).
4. Alat pembaca menghitung TAG yang sama dan membandingkannya. Cocok berarti asli.

Chip hanya **menghasilkan** TAG. Pembuatan angka acak dan keputusan asli atau palsu
ada di sisi alat pembaca.

### Mengapa lebih kuat dari kode QR atau hologram

- Kunci tidak pernah keluar dari chip, jadi menyadap komunikasi tidak membocorkannya.
- Angka acak selalu baru, jadi jawaban yang direkam tidak bisa diputar ulang.
- Nomor urut hanya bisa naik, jadi chip tiruan dengan UID yang sama akan ketahuan.

### Kasus penggunaan nyata

Chip ditanam di label, segel, atau dokumen. Siapa pun yang memegang alat pembaca
resmi bisa memastikan keasliannya dalam beberapa milidetik.

| Penggunaan | Chip dipasang di | Yang memeriksa | Yang dibuktikan |
|---|---|---|---|
| Barang kena cukai | Segel karton atau palet rokok dan minuman beralkohol | Petugas Bea Cukai di gudang, pelabuhan, dan pasar | Kiriman berasal dari pabrik resmi dan segelnya bukan tiruan |
| Obat dan alat kesehatan | Label kemasan atau segel dus | Apotek, rumah sakit, distributor | Produk berasal dari produsen terdaftar |
| Suku cadang dan barang bermerek | Label garansi atau kartu keaslian | Bengkel resmi, toko, pembeli | Barang asli, bukan tiruan dengan kemasan mirip |
| Dokumen berharga | Ijazah, sertifikat tanah, BPKB, surat berharga | Instansi penerbit, bank, notaris | Dokumen diterbitkan pihak berwenang |
| Identitas perangkat | Papan elektronik meteran, mesin EDC, perangkat IoT, atau komponen habis pakai | Server atau perangkat induk | Perangkat atau komponen itu resmi sebelum diberi layanan |

Alur pemakaian di lapangan:

1. **Personalisasi.** Di fasilitas aman, tiap chip diisi UID dan kunci turunannya,
   lalu dikunci permanen.
2. **Pemasangan.** Chip ditempel pada barang atau ditanam di dokumen.
3. **Pemeriksaan.** Alat pembaca meminta angka acak dari server verifikasi,
   meneruskannya ke chip, lalu mengirim jawaban chip kembali ke server.
4. **Keputusan.** Server, yang memegang kunci induk, menghitung ulang TAG dan
   menjawab asli atau palsu. Server juga mencatat nomor urut untuk mendeteksi kloning.

Karena kuncinya simetris, pemeriksaan harus lewat server atau alat pembaca yang
punya modul keamanan sendiri. Kunci induk tidak boleh berada di aplikasi ponsel.

Untuk dokumen, pesan yang di-hash bisa diperluas dengan ringkasan isi dokumen.
Chip asli yang dipindahkan ke dokumen lain akan ketahuan, karena isinya tidak lagi
cocok. Parameter `MSG_BITS` di `hmac_sha256` sudah disiapkan untuk ini.

### Nilai bisnis

**Masalah yang dijawab**

- Studi Masyarakat Indonesia Anti Pemalsuan (MIAP) bersama Universitas Pelita Harapan
  tahun 2020 memperkirakan kerugian ekonomi akibat peredaran produk palsu lebih dari
  Rp291 triliun, dengan kehilangan penerimaan pajak Rp967 miliar.
- Kerugian negara akibat rokok ilegal diperkirakan Rp15 sampai 25 triliun per tahun,
  dan Bea Cukai mengamankan 710 juta batang rokok ilegal sepanjang 2024.
- Pada 2021, satu kasus pemalsuan meterai saja berpotensi merugikan negara sekitar
  Rp37 miliar.

Angka-angka itu mencakup pemalsuan dan peredaran ilegal secara umum. Chip ini
menyasar bagian yang bergantung pada tanda keaslian yang bisa ditiru.

**Mengapa cocok untuk Peruri**

- Kompetensi inti Peruri adalah penjamin keaslian. Chip ini membawa peran itu dari
  cetakan dan kode ke perangkat keras.
- Peruri Code sudah dipakai untuk penjaminan keaslian, kontrol distribusi, dan
  perlindungan merek, dengan teknologi Secure QR, RFID, NFC, dan IoT. Kode cetak bisa
  disalin; chip dengan kunci di dalamnya tidak. Chip ini menjadi tingkat keamanan
  yang lebih tinggi di lini produk yang sama.
- Platform pengawasan yang sudah ada (Peruri Trust) bisa menjadi tempat server
  verifikasi dan pencatatan nomor urut.
- Chip yang dirancang di dalam negeri mengurangi ketergantungan pada chip keamanan
  impor, sejalan dengan tujuan Sandbox Desain Chip Merah Putih.

**Model pendapatan**

| Sumber | Bentuk |
|---|---|
| Chip atau label ber-chip | Harga per unit, dijual ke pemilik merek atau instansi |
| Personalisasi | Jasa pengisian kunci dan UID di fasilitas aman |
| Verifikasi | Langganan atau biaya per pemeriksaan pada server verifikasi |
| Data distribusi | Laporan pelacakan dan peringatan kloning untuk pemilik merek |

**Batas kelayakan yang perlu diakui**

- **Biaya per unit.** Chip tidak ekonomis untuk barang bernilai sangat rendah, seperti
  satu lembar meterai atau satu bungkus rokok. Sasaran yang realistis adalah barang
  bernilai tinggi, segel tingkat karton atau palet, dan dokumen yang berumur panjang.
- **Antarmuka.** Produk label memerlukan antarmuka nirkabel (NFC) dan daya dari
  medan pembaca. Proyek ini baru membuktikan inti digitalnya lewat UART.
- **Infrastruktur.** Nilai chip bergantung pada server verifikasi dan pengelolaan
  kunci induk yang aman.

Chip autentikasi simetris berbasis SHA-256 sudah menjadi kategori produk komersial
di pasar global, antara lain untuk autentikasi aksesori dan komponen habis pakai.
Yang ditawarkan proyek ini adalah versi yang dirancang secara terbuka di dalam
negeri dan bisa disesuaikan dengan kebutuhan Peruri.

## Masukan dan keluaran

### Pin chip

| Pin | Arah | Fungsi |
|---|---|---|
| `clk` | in | Clock sistem, 50 MHz |
| `rst_n` | in | Reset, aktif rendah |
| `uart_rx` | in | Perintah dari alat pembaca (115200 baud, 8N1) |
| `tamper_n` | in | Sensor pembongkaran, aktif rendah |
| `uart_tx` | out | Jawaban ke alat pembaca |
| `busy` | out | Tinggi selama HMAC dihitung |
| `locked` | out | Tinggi setelah chip dikunci permanen |
| `alarm` | out | Tinggi jika tamper terdeteksi atau nomor urut habis |

### Perintah dan jawaban

Setiap perintah diawali satu byte kode. Setiap jawaban diawali satu byte status.

| Perintah | Kode | Data masuk | Data keluar |
|---|---|---|---|
| GET_UID | `0x01` | tidak ada | status + UID (8) |
| AUTH | `0x02` | angka acak (16) | status + UID (8) + nomor urut (4) + TAG (32) |
| WRITE_KEY | `0x10` | kunci (32) | status |
| WRITE_UID | `0x11` | UID (8) | status |
| LOCK | `0x1F` | tidak ada | status |

| Status | Arti |
|---|---|
| `0x00` | Berhasil |
| `0xE1` | Ditolak: sudah terkunci (untuk penulisan dan LOCK) atau belum dikunci (untuk AUTH) |
| `0xE2` | Tamper terdeteksi |
| `0xE3` | Perintah tidak dikenal |
| `0xE4` | Nomor urut habis |

Keluaran utama chip adalah jawaban AUTH sepanjang 45 byte. Kunci hanya pernah masuk
(sekali, saat WRITE_KEY) dan tidak ada perintah untuk membacanya.

## Data yang di-hash

```
msg   = UID (8 byte) || angka acak (16 byte) || nomor urut (4 byte)     = 28 byte

inner = SHA256( (kunci XOR ipad) || msg )
TAG   = SHA256( (kunci XOR opad) || inner )
```

`ipad` adalah 64 byte `0x36`, `opad` adalah 64 byte `0x5c`, dan kunci 32 byte
dipanjangkan dengan nol sampai 64 byte. Satu autentikasi memerlukan empat kompresi
SHA-256.

| Bagian pesan | Asal | Guna |
|---|---|---|
| UID | Tersimpan di chip | Mengikat jawaban ke chip ini |
| Angka acak | Alat pembaca | Membuat tiap jawaban hanya berlaku sekali |
| Nomor urut | Penghitung di chip | Lapisan kedua anti-replay dan deteksi kloning |

Kunci tiap chip berbeda dan diturunkan di pabrik dari kunci induk:
`kunci chip = HMAC-SHA256(kunci induk, UID)`. Bocornya satu chip tidak membuka chip
lain.

## Arsitektur

```
auth_chip_top
├── uart            serial <-> byte
├── protocol        perintah, izin, penyusun jawaban
├── secure_store    kunci, UID, bit kunci permanen, nomor urut, tamper
└── hmac_sha256     menyusun 4 blok HMAC
    └── sha256_tt07     SHA-256 penuh untuk satu blok
        └── baseline TT07   satu ronde SHA-256
```

### Blok yang sudah selesai

| Blok | File | Tugas |
|---|---|---|
| Baseline TT07 | `src/tt07_baseline/project.v` | 10 register 32 bit (A sampai H, W, K) di balik bus 8 bit, dan satu ronde kompresi saat alamat 63 ditulis |
| `sha256_tt07` | `src/tt07_SHA256.v` | Tabel konstanta K, jadwal pesan, nilai awal, penjumlahan akhir, dan FSM yang mengemudikan bus baseline untuk 64 ronde |
| `hmac_sha256` | `src/hmac_sha256.v` | Menyusun blok ipad, pesan, opad, dan inner, lalu menjalankan `sha256_tt07` empat kali |

### Blok yang perlu dibuat

| Blok | Tugas |
|---|---|
| `secure_store` | Menyimpan kunci (hanya bisa ditulis), UID, bit kunci permanen, dan nomor urut yang hanya bisa naik; menghapus kunci dan menyalakan alarm saat `tamper_n` terpicu |
| `uart` | Menyelaraskan pin RX ke clock, mengubah bit serial menjadi byte dan sebaliknya |
| `protocol` | Membaca kode perintah dan datanya, memeriksa izin, memicu HMAC, lalu menyusun dan mengirim jawaban |
| `auth_chip_top` | Menyambungkan semua blok dan menyusun pesan 28 byte |

Port, aturan perilaku, dan rencana uji keempat blok ini ada di bagian
*Spesifikasi blok RTL yang perlu dibuat*.

Dua batas yang sengaja dipertahankan:

- `uart` terpisah dari `protocol`, sehingga antarmuka bisa diganti (misalnya ke SPI)
  tanpa mengubah perintah.
- Kunci di `secure_store` hanya punya satu jalur keluar, yaitu ke `hmac_sha256`.

### Antarmuka blok yang sudah selesai

`sha256_tt07`

| Port | Arah | Lebar | Fungsi |
|---|---|---|---|
| `init` | in | 1 | Pulsa mulai untuk blok pertama (mulai dari nilai awal) |
| `next` | in | 1 | Pulsa mulai untuk blok lanjutan |
| `block` | in | 512 | Satu blok yang sudah di-padding |
| `ready` | out | 1 | Tinggi saat menganggur |
| `digest_valid` | out | 1 | Pulsa satu siklus saat hasil siap |
| `digest` | out | 256 | Nilai hash |

`hmac_sha256`

| Port | Arah | Lebar | Fungsi |
|---|---|---|---|
| `start` | in | 1 | Pulsa satu siklus untuk memulai |
| `key` | in | 256 | Kunci rahasia, harus stabil selama `busy` |
| `msg` | in | 224 | UID, angka acak, nomor urut; harus stabil selama `busy` |
| `busy` | out | 1 | Tinggi selama perhitungan |
| `tag_valid` | out | 1 | Pulsa satu siklus saat TAG siap |
| `tag` | out | 256 | Hasil HMAC |

Panjang pesan diatur lewat parameter `MSG_BITS` (kelipatan 8, maksimum 440).

## Spesifikasi blok RTL yang perlu dibuat

Bagian ini adalah spesifikasi kerja untuk empat blok yang belum ditulis. Nama port
dan lebar bit di sini menjadi acuan saat menulis RTL dan testbench-nya.

### Konvensi bersama

- Verilog-2001, satu modul per file, diawali `` `default_nettype none ``.
- Satu clock (`clk`, tepi naik) dan satu reset aktif rendah (`rst_n`).
- Sinyal kendali satu arah (`*_we`, `*_start`, `*_valid`, `ctr_incr`, `lock_set`)
  berupa pulsa tepat satu siklus clock.
- Aliran byte memakai `data[7:0]` dengan `valid`, ditambah `ready` jika penerima
  bisa menahan.
- Data multi-byte dikirim dan disimpan dengan byte paling berarti lebih dulu.
- Semua masukan dari luar chip (`uart_rx`, `tamper_n`) melewati dua flip-flop
  penyelaras sebelum dipakai.

### `secure_store`

Menyimpan semua data rahasia dan status keamanan. Satu-satunya blok yang memegang
kunci.

| Port | Arah | Lebar | Fungsi |
|---|---|---|---|
| `clk`, `rst_n` | in | 1 | Clock dan reset |
| `tamper_n` | in | 1 | Sensor pembongkaran, aktif rendah, asinkron |
| `wr_data` | in | 256 | Data tulis; UID memakai 64 bit terendah |
| `key_we` | in | 1 | Tulis kunci |
| `uid_we` | in | 1 | Tulis UID |
| `lock_set` | in | 1 | Kunci permanen |
| `ctr_incr` | in | 1 | Naikkan nomor urut |
| `key` | out | 256 | Kunci; hanya disambungkan ke `hmac_sha256` |
| `uid` | out | 64 | Nomor identitas chip |
| `ctr` | out | 32 | Nomor urut |
| `locked` | out | 1 | Chip sudah dikunci |
| `tamper` | out | 1 | Tamper pernah terdeteksi (terkunci sampai reset) |
| `ctr_full` | out | 1 | Nomor urut sudah mencapai `0xFFFFFFFF` |

Register: `key_reg` (256), `uid_reg` (64), `ctr_reg` (32), `lock_reg` (1),
`tamper_reg` (1), dan dua flip-flop penyelaras untuk `tamper_n`.

Aturan perilaku:

| Kejadian | Syarat | Akibat |
|---|---|---|
| `key_we` | `locked` = 0 dan `tamper` = 0 | `key_reg` diisi `wr_data` |
| `uid_we` | `locked` = 0 dan `tamper` = 0 | `uid_reg` diisi `wr_data[63:0]` |
| `lock_set` | `tamper` = 0 | `lock_reg` menjadi 1 dan tidak bisa kembali ke 0 |
| `ctr_incr` | `ctr_full` = 0 | `ctr_reg` bertambah 1 |
| `tamper_n` rendah (setelah diselaraskan) | selalu | `tamper_reg` menjadi 1 dan `key_reg` dihapus menjadi nol pada siklus yang sama |
| `rst_n` rendah | selalu | Semua register kembali nol (chip kosong seperti baru) |

Catatan:

- Perintah tulis yang syaratnya tidak terpenuhi diabaikan tanpa efek. Penolakan
  dilaporkan oleh `protocol`, bukan oleh blok ini.
- Penghapusan kunci menang atas `key_we` jika keduanya terjadi bersamaan.
- Tidak ada port yang mengeluarkan kunci selain `key`.
- Di FPGA, reset mengosongkan chip. Itu aman karena kunci ikut terhapus, tetapi
  chip sungguhan memerlukan memori non-volatil dan bit kunci sekali tulis.

Rencana uji: tulis lalu pakai kunci dan UID; penulisan ditolak setelah `lock_set`;
nomor urut naik satu per `ctr_incr` dan berhenti di nilai maksimum; pulsa
`tamper_n` satu siklus pun menghapus kunci dan mengunci `tamper`; kunci tidak bisa
ditulis lagi setelah tamper; reset mengosongkan semua register.

### `uart`

Mengubah bit serial menjadi byte dan sebaliknya. Tidak tahu apa pun tentang
perintah.

| Parameter | Default | Fungsi |
|---|---|---|
| `CLK_HZ` | 50000000 | Frekuensi clock |
| `BAUD` | 115200 | Laju bit; pembagi = `CLK_HZ / BAUD` (434) |

| Port | Arah | Lebar | Fungsi |
|---|---|---|---|
| `clk`, `rst_n` | in | 1 | Clock dan reset |
| `rx` | in | 1 | Jalur serial masuk, asinkron |
| `tx` | out | 1 | Jalur serial keluar, diam di tinggi |
| `rx_data` | out | 8 | Byte yang diterima |
| `rx_valid` | out | 1 | Pulsa satu siklus saat `rx_data` sah |
| `tx_data` | in | 8 | Byte yang akan dikirim |
| `tx_valid` | in | 1 | Permintaan kirim |
| `tx_ready` | out | 1 | Tinggi saat pengirim menganggur |

Format: 8 bit data, tanpa paritas, 1 bit berhenti, bit terendah lebih dulu.

Penerima:

1. `rx` diselaraskan dengan dua flip-flop.
2. Tepi turun saat menganggur dianggap bit mulai.
3. Setengah periode bit kemudian `rx` diperiksa lagi; jika sudah tinggi, itu
   gangguan dan penerima kembali menganggur.
4. Delapan bit data diambil di tengah tiap periode bit.
5. Bit berhenti diperiksa. Jika tinggi, `rx_valid` berdenyut; jika rendah, byte
   dibuang.

Pengirim: satu byte diambil saat `tx_valid` dan `tx_ready` sama-sama tinggi, lalu
dikirim sebagai bit mulai, 8 bit data, dan bit berhenti. `tx_ready` rendah selama
pengiriman.

Catatan: penerima tidak punya penyangga dan tidak bisa menahan pengirim di luar,
jadi `protocol` harus mengambil tiap byte pada siklus `rx_valid`.

Rencana uji: kirim-terima semua 256 nilai byte dengan `tx` disambung ke `rx`;
byte berturut-turut tanpa jeda; gangguan pendek pada `rx` tidak menghasilkan byte;
bit berhenti yang salah membuat byte dibuang; selisih laju bit pengirim plus dan
minus 2 persen masih terbaca.

### `protocol`

Menerjemahkan perintah menjadi aksi dan menyusun jawaban. Tidak menyimpan kunci.

| Parameter | Default | Fungsi |
|---|---|---|
| `TIMEOUT_CYCLES` | 5000000 | Batas tunggu antar-byte dalam satu perintah (100 ms pada 50 MHz) |

| Port | Arah | Lebar | Fungsi |
|---|---|---|---|
| `clk`, `rst_n` | in | 1 | Clock dan reset |
| `rx_data`, `rx_valid` | in | 8, 1 | Byte dari `uart` |
| `tx_data`, `tx_valid` | out | 8, 1 | Byte ke `uart` |
| `tx_ready` | in | 1 | `uart` siap menerima byte |
| `nonce` | out | 128 | Angka acak dari perintah AUTH, stabil selama HMAC |
| `auth_start` | out | 1 | Pemicu `hmac_sha256` |
| `tag` | in | 256 | Hasil HMAC |
| `tag_valid` | in | 1 | Tanda `tag` siap |
| `wr_data` | out | 256 | Data tulis ke `secure_store` |
| `key_we`, `uid_we`, `lock_set`, `ctr_incr` | out | 1 | Perintah ke `secure_store` |
| `uid`, `ctr` | in | 64, 32 | Data untuk jawaban |
| `locked`, `tamper`, `ctr_full` | in | 1 | Status untuk pemeriksaan izin |

Keadaan FSM:

| Keadaan | Yang dilakukan | Pindah ke |
|---|---|---|
| `S_CMD` | Menunggu byte kode perintah dan menentukan panjang datanya | `S_DATA` jika ada data, selain itu `S_EXEC` |
| `S_DATA` | Menggeser tiap byte ke register data 256 bit | `S_EXEC` saat lengkap; `S_CMD` saat waktu tunggu habis |
| `S_EXEC` | Memeriksa izin dan mengeluarkan pulsa aksi | `S_HMAC` untuk AUTH yang diizinkan, selain itu `S_RESP` |
| `S_HMAC` | Menunggu `tag_valid` | `S_RESP` |
| `S_RESP` | Mengirim jawaban byte demi byte mengikuti `tx_ready` | `S_CMD` |

Panjang data dan jawaban:

| Perintah | Kode | Data masuk | Jawaban saat berhasil |
|---|---|---|---|
| GET_UID | `0x01` | 0 byte | `00` + UID (8) = 9 byte |
| AUTH | `0x02` | 16 byte | `00` + UID (8) + nomor urut (4) + TAG (32) = 45 byte |
| WRITE_KEY | `0x10` | 32 byte | `00` = 1 byte |
| WRITE_UID | `0x11` | 8 byte | `00` = 1 byte |
| LOCK | `0x1F` | 0 byte | `00` = 1 byte |
| lainnya | — | 0 byte | `E3` = 1 byte |

Pemeriksaan izin, dievaluasi dari atas ke bawah; jawaban galat selalu 1 byte:

| Perintah | Pemeriksaan | Status |
|---|---|---|
| GET_UID | Selalu diizinkan | `00` |
| AUTH | `tamper` = 1 | `E2` |
| | `locked` = 0 | `E1` |
| | `ctr_full` = 1 | `E4` |
| | selain itu | `00` |
| WRITE_KEY, WRITE_UID | `tamper` = 1 | `E2` |
| | `locked` = 1 | `E1` |
| | selain itu | `00` |
| LOCK | `tamper` = 1 | `E2` |
| | `locked` = 1 | `E1` |
| | selain itu | `00` |

Urutan AUTH yang diizinkan:

1. `nonce` diisi dari 16 byte data.
2. `ctr_incr` berdenyut satu siklus.
3. Satu siklus kemudian `auth_start` berdenyut, sehingga HMAC memakai nomor urut
   yang baru. Autentikasi pertama setelah LOCK memakai nomor urut 1.
4. Menunggu `tag_valid`.
5. Jika `tamper` menjadi 1 selama menunggu, jawabannya `E2` saja.
6. Selain itu jawaban 45 byte dikirim. `uid`, `ctr`, dan `tag` dibaca langsung dari
   port masukan; ketiganya stabil sampai perintah berikutnya.

Nomor urut dinaikkan sebelum HMAC dihitung, supaya nilai yang sama tidak pernah
terpakai dua kali walaupun daya terputus di tengah proses.

Catatan:

- Byte yang datang di luar `S_CMD` dan `S_DATA` diabaikan. Alat pembaca harus
  menunggu jawaban sebelum mengirim perintah berikutnya.
- Jika data perintah tidak lengkap sampai waktu tunggu habis, perintah dibuang
  tanpa jawaban, sehingga alat pembaca bisa menyelaraskan ulang.
- Register data 256 bit dihapus menjadi nol setelah `S_EXEC`, karena pada
  WRITE_KEY isinya adalah kunci.
- Tidak ada perbandingan terhadap nilai rahasia di blok ini.

Rencana uji: tiap perintah pada keadaan belum dikunci dan sudah dikunci; semua
kode status; kode perintah tidak dikenal; data terpotong lalu perintah baru setelah
waktu tunggu; byte yang datang saat sibuk; `tx_ready` yang tersendat; tamper di
tengah AUTH; jawaban AUTH dibandingkan byte demi byte dengan model Python.

### `auth_chip_top`

Modul paling atas. Hanya berisi sambungan, tanpa logika selain yang tercantum di
bawah.

| Parameter | Default | Diteruskan ke |
|---|---|---|
| `CLK_HZ` | 50000000 | `uart` |
| `BAUD` | 115200 | `uart` |

Port: delapan pin pada tabel *Pin chip*.

Sambungan internal:

| Sinyal | Sumber | Tujuan |
|---|---|---|
| `msg[223:0]` | `{uid, nonce, ctr}` | `hmac_sha256.msg` |
| `key[255:0]` | `secure_store.key` | `hmac_sha256.key` saja |
| `auth_start` | `protocol` | `hmac_sha256.start` |
| `tag`, `tag_valid` | `hmac_sha256` | `protocol` |
| Aliran byte RX dan TX | `uart` | `protocol` |
| `busy` (pin) | `hmac_sha256.busy` | luar |
| `locked` (pin) | `secure_store.locked` | luar |
| `alarm` (pin) | `tamper` OR `ctr_full` | luar |

Reset: `rst_n` dari pin diselaraskan (masuk asinkron, lepas sinkron) sebelum
dibagikan ke semua blok.

Pemetaan ke DE10-Nano (nomor pin dicocokkan dengan manual papan saat membuat
proyek Quartus):

| Pin chip | Sumber di papan |
|---|---|
| `clk` | Osilator 50 MHz papan |
| `rst_n` | Tombol tekan |
| `uart_rx`, `uart_tx` | Header GPIO, lewat adaptor USB-TTL 3,3 V |
| `tamper_n` | Sakelar geser atau tombol tekan kedua |
| `busy`, `locked`, `alarm` | LED |

Rencana uji: urutan pabrik lengkap (WRITE_UID, WRITE_KEY, LOCK) lalu beberapa AUTH
lewat pin serial, dengan TAG dibandingkan terhadap `hmac` Python; nomor urut naik
tiap AUTH; penulisan kunci ditolak setelah LOCK; tamper di antara dua AUTH membuat
AUTH berikutnya dijawab `E2`.

### Waktu satu transaksi AUTH

| Tahap | Lama |
|---|---|
| Menerima 17 byte | sekitar 1,5 ms |
| Menghitung HMAC | sekitar 0,05 ms |
| Mengirim 45 byte | sekitar 3,9 ms |
| Total | sekitar 5,4 ms |

## Kinerja

| Ukuran | Nilai |
|---|---|
| SHA-256, satu blok | 646 siklus clock |
| HMAC, satu autentikasi | 2.593 siklus clock, sekitar 52 mikrodetik pada 50 MHz |
| Satu transaksi AUTH lewat UART | sekitar 5,4 milidetik (didominasi UART) |
| Perkiraan ukuran `hmac_sha256` | sekitar 2.900 LUT dan 1.650 flip-flop |

Latensi tidak bergantung pada nilai kunci maupun pesan. Angka ukuran berasal dari
sintesis Yosys untuk Cyclone V dan bisa berbeda di Quartus.

Tiap ronde memakan 9 siklus karena bus baseline hanya 8 bit (4 byte W, 4 byte K,
1 pemicu). Mengganti bus itu dengan jalur 32 bit memangkasnya menjadi 1 siklus per
ronde; ini kandidat optimasi berikutnya.

## Struktur folder

```
HMAC_SHA256/
├── README.md
├── .gitignore
├── src/
│   ├── tt07_baseline/
│   │   ├── project.v          baseline TT07, tanpa perubahan
│   │   └── LICENSE            Apache-2.0
│   ├── tt07_SHA256.v          modul sha256_tt07
│   └── hmac_sha256.v          modul hmac_sha256
└── tb/
    ├── tt07_SHA256/
    │   ├── Makefile
    │   └── tt07_SHA256_tb.py
    └── hmac_sha256/
        ├── Makefile
        └── hmac_sha256_tb.py
```

## Menjalankan uji

Kebutuhan: Icarus Verilog, Python 3, cocotb, dan GTKWave untuk melihat gelombang.

```
sudo apt install make iverilog gtkwave python3-venv
python3 -m venv .venv
source .venv/bin/activate
pip install cocotb
```

Jalankan dari folder testbench masing-masing:

```
cd tb/tt07_SHA256 && make       # TESTS=10 PASS=10 FAIL=0
cd tb/hmac_sha256 && make       # TESTS=9  PASS=9  FAIL=0
```

Untuk menyimpan gelombang:

```
make clean
make WAVES=1
gtkwave sim_build/sha256_tt07.fst
```

Selalu jalankan lewat `make`. Menjalankan `vvp sim_build/sim.vvp` secara langsung
akan menimpa file gelombang dengan file kosong.

## Verifikasi

Setiap hash dan TAG yang dihitung RTL dicetak berdampingan dengan hasil Python
(`hashlib` dan `hmac`) beserta tanda COCOK atau BEDA.

| Modul | Uji | Cakupan |
|---|---|---|
| `sha256_tt07` | 10 | Vektor resmi NIST (FIPS 180-4), batas padding 54 sampai 128 byte, 25 pesan acak, pola data ekstrem, latensi tetap, gangguan pada masukan, reset di tengah perhitungan |
| `hmac_sha256` | 9 | Vektor resmi RFC 4231 (test case 2), kunci dan pesan ekstrem, 20 vektor acak, format pesan chip, latensi tetap, autentikasi berturut-turut, reset di tengah perhitungan |

Kedua rangkaian uji sudah dibuktikan menangkap kesalahan: merusak satu konstanta K
menggagalkan 9 dari 10 uji SHA-256, dan merusak pola opad menggagalkan 8 dari 9 uji
HMAC.

## Rancangan keamanan

| Ancaman | Mitigasi |
|---|---|
| Replay jawaban lama | Angka acak dari alat pembaca dan nomor urut di chip |
| Pembacaan kunci | Kunci hanya bisa ditulis, lalu dikunci permanen |
| Satu chip bocor | Kunci berbeda per chip, diturunkan dari UID |
| Penyadapan nilai antara | Bus baseline dikemudikan dari dalam chip, tidak tersambung ke pin |
| Serangan fisik | `tamper_n` menghapus kunci dan menyalakan `alarm` |
| Serangan waktu | Latensi tetap, dan chip tidak melakukan perbandingan rahasia |
| Kloning | Pemeriksaan nomor urut di sisi alat pembaca |

Nilai antara yang dihapus setelah dipakai: register W baseline, jendela pesan
`w_reg`, dan hash dalam `inner`.

## Keterbatasan

- **Penyimpanan tidak permanen.** Di FPGA, kunci, UID, dan nomor urut hilang saat daya
  mati. Chip sungguhan memerlukan memori non-volatil.
- **Belum ada perlindungan analisis daya (DPA).**
- **Register A sampai H baseline belum dihapus** setelah tiap blok. Nilainya tidak
  terjangkau dari pin, tetapi baru hilang saat blok berikutnya dimuat atau saat reset.
- **Antarmuka UART dipilih demi kemudahan demo.** Label produk sungguhan memakai NFC,
  yang bagian analognya di luar cakupan proyek ini.
- **Keamanan sistem bergantung pada kunci induk** di sisi verifikasi, yang harus
  disimpan di server atau modul keamanan, bukan di alat pembaca lapangan.
- **Belum diuji** di Quartus, di papan DE10-Nano, dan dengan cocotb 1.x.

## Rencana berikutnya

1. `secure_store` beserta ujinya.
2. `uart`, diuji dengan menyambungkan TX ke RX.
3. `protocol`.
4. `auth_chip_top`, lalu uji satu transaksi AUTH penuh terhadap model Python.
5. Sintesis Quartus, penetapan pin DE10-Nano, dan skrip alat pembaca di laptop.
6. Optimasi: jalur data 32 bit ke rumus ronde, dan perluasan penghapusan ke
   register A sampai H.

## Atribusi dan lisensi

`src/tt07_baseline/project.v` berasal dari
[xeniarose/tt07-sha256](https://github.com/xeniarose/tt07-sha256)
(commit `655efb8`, 30 Mei 2024), hak cipta (c) 2024 xenia dragon, lisensi Apache-2.0.
File itu disalin tanpa perubahan, dan salinan lisensinya ada di folder yang sama.

Kunci dan UID di dalam testbench hanyalah contoh untuk pengujian.

## Sumber data

- [Medcom, 21 Desember 2021: Kerugian ekonomi akibat produk palsu capai Rp291 triliun](https://www.medcom.id/ekonomi/bisnis/gNQeo5wN-kerugian-ekonomi-gara-gara-peredaran-produk-palsu-capai-rp291-triliun)
- [Detik Finance, 28 Agustus 2025: Negara bisa rugi Rp25 triliun gara-gara rokok ilegal](https://finance.detik.com/industri/d-8083568/negara-bisa-rugi-rp-25-t-gegara-rokok-ilegal/amp)
- [Medcom, 17 Maret 2021: Meterai palsu rugikan negara Rp37 miliar](https://www.medcom.id/ekonomi/makro/JKRAp4xk-meterai-palsu-rugikan-negara-rp37-miliar)
- [Kontan: Optimalisasi keamanan digital, Pertamina gandeng Perum Peruri](https://industri.kontan.co.id/news/optimalisasi-keamanan-digital-pertamina-gandeng-perum-peruri) (peran Peruri Code dan Peruri Trust)
- [Republika: Peruri lanjutkan transformasi produk dan jasa digital](https://news.republika.co.id/berita/q2qdt4330/peruri-lanjutkan-transformasi-produk-dan-jasa-digital) (teknologi Peruri Code)
- [Kontan: Industri semikonduktor diperkuat, akses desain chip kian terbuka](https://industri.kontan.co.id/news/industri-semikonduktor-diperkuat-akses-desain-chip-kini-kian-terbuka) (Sandbox Desain Chip Merah Putih)
