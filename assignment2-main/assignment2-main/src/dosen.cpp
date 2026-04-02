#include <iostream>
#include "include/dosen.hpp"

namespace sim {
    Dosen::Dosen(std::string id, std::string nama, std::string tanggal_lahir, 
                 std::string nidn, std::string departemen)
        : Orang(id, nama, tanggal_lahir), nidn(nidn), departemen(departemen) {}

    void Dosen::tampilkanInfo() const {
        std::cout << "=== Data Dosen ===\n";
        Orang::tampilkanInfo();
        std::cout << "NIDN          : " << nidn << "\n"
                  << "Departemen    : " << departemen << "\n\n";
    }
}