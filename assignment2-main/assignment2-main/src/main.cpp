#include <iostream>
#include <string>

#include "include/orang.hpp"
#include "include/dosen.hpp"
#include "include/mahasiswa.hpp"
#include "include/tendik.hpp"

using namespace std;
// Menggunakan custom namespace yang telah dibuat
using namespace sim;

int main(int argc, char ** argv)
{
    cout << "Sistem Informasi Manajemen (SIM) Akademik" << endl;
    cout << "-----------------------------------------\n" << endl;

    // 1. Instansiasi Object Mahasiswa
    Mahasiswa mhs1("O-001", "Budi Santoso", "15-05-2004", "5024221001", "Teknik Komputer", 3.75);
    
    // 2. Instansiasi Object Dosen
    Dosen dsn1("O-002", "Dr. Andi Setiawan", "10-12-1980", "198012102005011001", "Teknik Elektro");
    
    // 3. Instansiasi Object Tendik
    Tendik tdk1("O-003", "Siti Aminah", "22-08-1990", "199008222015042002", "Tata Usaha");

    // 4. Memanggil method untuk menampilkan informasi
    mhs1.tampilkanInfo();
    dsn1.tampilkanInfo();
    tdk1.tampilkanInfo();

    return 0;
}