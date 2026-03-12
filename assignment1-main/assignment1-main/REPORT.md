# Laporan Programming Assignment 1: Basic C++
## Nama : Zendie Hafidz
## NRP : 50242251017
Program ini dibuat menggunakan bahasa C++ untuk menghitung:
1. Umur seseorang dalam tahun
2. Umur seseorang dalam bulan
3. Hari dalam seminggu dari tanggal lahir

Program menerima input berupa tanggal lahir dengan format:

DD/MM/YYYY

Contoh:

12/03/1993

 

### Library yang Digunakan

Program menggunakan beberapa library standar C++:

- `iostream` untuk input output
- `string` untuk manipulasi string
- `ctime` untuk pengolahan waktu
- `sstream` untuk parsing string input

 

### Fungsi Utama

Program menggunakan tiga fungsi utama.

#### 1. yearsOld()

Fungsi ini digunakan untuk menghitung umur dalam tahun.

Algoritma:
- Mengurangi tahun sekarang dengan tahun lahir
- Mengecek apakah ulang tahun tahun ini sudah lewat atau belum
- Jika belum lewat maka umur dikurangi satu

#### 2. monthsOld()

Fungsi ini menghitung umur dalam bulan.

Algoritma:
- Menghitung selisih tahun lalu dikonversi menjadi bulan
- Ditambah selisih bulan
- Jika hari sekarang lebih kecil dari hari lahir maka bulan dikurangi satu

#### 3. dayOfDate()

Fungsi ini digunakan untuk menentukan hari dari tanggal yang diinput.

Langkah-langkah:
1. Menggunakan fungsi `mktime()` untuk menghitung hari
2. Mengambil nilai `tm_wday`
3. Mengubah nilai tersebut menjadi nama hari

 