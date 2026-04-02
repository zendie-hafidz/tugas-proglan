#include <iostream>
#include "include/mahasiswa.hpp"

namespace sim {
    Mahasiswa::Mahasiswa(std::string id, std::string nama, std::string tanggal_lahir, 
                         std::string nim, std::string jurusan, float ipk)
        : Orang(id, nama, tanggal_lahir), nim(nim), jurusan(jurusan), ipk(ipk) {}

    void Mahasiswa::tampilkanInfo() const {
        std::cout << "=== Data Mahasiswa ===\n";
        Orang::tampilkanInfo(); // Memanggil method parent
        std::cout << "NIM           : " << nim << "\n"
                  << "Jurusan       : " << jurusan << "\n"
                  << "IPK           : " << ipk << "\n\n";
    }
}