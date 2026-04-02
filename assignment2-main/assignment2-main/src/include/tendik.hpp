#ifndef TENDIK_HPP
#define TENDIK_HPP

#include "orang.hpp"

namespace sim {
    class Tendik : public Orang {
    private:
        std::string nip;
        std::string unit_kerja;

    public:
        Tendik(std::string id, std::string nama, std::string tanggal_lahir, 
               std::string nip, std::string unit_kerja);
        
        void tampilkanInfo() const override;
    };
}

#endif