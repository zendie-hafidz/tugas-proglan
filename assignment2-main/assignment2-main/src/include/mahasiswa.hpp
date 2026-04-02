#ifndef MAHASISWA_HPP
#define MAHASISWA_HPP

#include "orang.hpp"

namespace sim {
    class Mahasiswa : public Orang {
    private:
        std::string nim;
        std::string jurusan;
        float ipk;

    public:
        Mahasiswa(std::string id, std::string nama, std::string tanggal_lahir, 
                  std::string nim, std::string jurusan, float ipk);
        
        // Override method dari parent class
        void tampilkanInfo() const override; 
    };
}

#endif