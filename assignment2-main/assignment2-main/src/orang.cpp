#include <iostream>
#include "include/orang.hpp"

namespace sim {
    Orang::Orang(std::string id, std::string nama, std::string tanggal_lahir) 
        : id(id), nama(nama), tanggal_lahir(tanggal_lahir) {}

    void Orang::tampilkanInfo() const {
        std::cout << "ID            : " << id << "\n"
                  << "Nama          : " << nama << "\n"
                  << "Tanggal Lahir : " << tanggal_lahir << "\n";
    }
}