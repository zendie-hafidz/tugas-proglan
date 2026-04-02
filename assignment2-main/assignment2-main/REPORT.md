# Buat Laporan Disini
## Nama : Zendie Hafidz
## NRP : 5024251017

# Laporan Programming Assignment 2: Object Oriented Programming

## 1. Deskripsi Program
Program ini adalah representasi sederhana dari Sistem Informasi Manajemen (SIM) Akademik. Program ditulis menggunakan bahasa C++ dengan menerapkan paradigma Object-Oriented Programming (OOP) yang meliputi konsep **Encapsulation**, **Inheritance**, dan **Polymorphism**. 

## 2. Desain Class dan Arsitektur
Sistem ini menggunakan satu *Base Class* dan tiga *Derived Classes*:
* **Orang (Base Class)**: Menyimpan atribut dasar seperti `id`, `nama`, dan `tanggal_lahir`.
* **Mahasiswa (Derived Class)**: Mewarisi `Orang`, menambahkan atribut spesifik `nim`, `jurusan`, dan `ipk`.
* **Dosen (Derived Class)**: Mewarisi `Orang`, menambahkan atribut `nidn` dan `departemen`.
* **Tendik (Derived Class)**: Mewarisi `Orang`, menambahkan atribut `nip` dan `unit_kerja`.

> **Catatan Ekstra**: Seluruh class dibungkus di dalam sebuah *custom namespace* bernama `sim` untuk mencegah konflik nama (Name Collisions) dan merapikan struktur proyek.

## 3. Contoh Input dan Output

Karena nilai atribut langsung diinisialisasi (hardcoded) melalui *constructor* pada fungsi `main()`, program akan langsung melakukan *printing* state internal dari masing-masing *object*.

**Contoh Output saat program dijalankan:**

```text
Sistem Informasi Manajemen (SIM) Akademik
-----------------------------------------

=== Data Mahasiswa ===
ID            : O-001
Nama          : Budi Santoso
Tanggal Lahir : 15-05-2004
NIM           : 5024221001
Jurusan       : Teknik Komputer
IPK           : 3.75

=== Data Dosen ===
ID            : O-002
Nama          : Dr. Andi Setiawan
Tanggal Lahir : 10-12-1980
NIDN          : 198012102005011001
Departemen    : Teknik Elektro

=== Data Tenaga Kependidikan ===
ID            : O-003
Nama          : Siti Aminah
Tanggal Lahir : 22-08-1990
NIP           : 199008222015042002
Unit Kerja    : Tata Usaha
