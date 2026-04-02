#include <iostream>
#include "include/tendik.hpp"

namespace sim {
    Tendik::Tendik(std::string id, std::string nama, std::string tanggal_lahir, 
                   std::string nip, std::string unit_kerja)
        : Orang(id, nama, tanggal_lahir), nip(nip), unit_kerja(unit_kerja) {}

    void Tendik::tampilkanInfo() const {
        std::cout << "=== Data Tenaga Kependidikan ===\n";
        Orang::tampilkanInfo();
        std::cout << "NIP           : " << nip << "\n"
                  << "Unit Kerja    : " << unit_kerja << "\n\n";
    }
}