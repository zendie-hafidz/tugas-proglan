# Laporan Programming Assignment 3: Simple STL
## NAMA: Zendie Hafidz 
## NRP : 5024251017

## 1. Pendahuluan
Program ini dikembangkan untuk mengklasifikasikan tipe segitiga berdasarkan tiga titik koordinat dua dimensi (2D). Program memanfaatkan konsep *Object-Oriented Programming* (OOP) pada C++ dengan memisahkan abstraksi data ke dalam dua kelas utama: `Point2D` dan `Triangle`, yang dibungkus di dalam sebuah *custom namespace* bernama `ZH_Geometry` untuk mencegah bentrok penamaan pada sistem berskala besar.

## 2. Metodologi dan Logika Sistem

### Kalkulasi Jarak Geometris (Kelas `Point2D`)
Jarak antar dua titik $P_1(x_1, y_1)$ dan $P_2(x_2, y_2)$ dihitung menggunakan formula Euclidean:
$$d = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}$$

Untuk mengoptimalkan komputasi dan mengurangi error presisi *floating point* pada pembuktian sudut siku-siku, kelas `Point2D` juga menyediakan fungsi `distanceSquaredTo` yang mengembalikan nilai jarak kuadrat $d^2$.

### Klasifikasi Segitiga (Kelas `Triangle`)
Misalkan sebuah segitiga memiliki sisi $a, b, c$ di mana $a \le b \le c$. Kondisi yang dievaluasi adalah:
* **Sama Sisi (Equilateral):** $a = b = c$
* **Sama Kaki (Isosceles):** $a = b$ atau $b = c$ atau $a = c$
* **Siku-Siku (Right-angled):** Memenuhi Teorema Pythagoras, yaitu $a^2 + b^2 = c^2$.
* **Sembarang (Scalene):** Tidak memenuhi satupun kondisi di atas.

Karena arsitektur ini menggunakan variabel bertipe `double`, evaluasi perbandingan dilakukan menggunakan konstanta margin error (Epsilon $\epsilon = 1 \times 10^{-5}$) alih-alih menggunakan operator `==` standar.

## 3. Contoh Input & Output

Berdasarkan pengujian pada `main.cpp`, berikut adalah kompilasi hasil eksekusinya:

```text
========================================
  Program Klasifikasi Segitiga Simple
========================================

[Test 1] (0,0), (3,0), (0,4)       -> Tipe: Siku-Siku
[Test 2] (0,0), (4,0), (2,5)       -> Tipe: Sama Kaki
[Test 3] (0,0), (4,0), (2,3.464)   -> Tipe: Sama Sisi
[Test 4] (0,0), (5,1), (2,6)       -> Tipe: Sembarang