#ifndef DOSEN_HPP
#define DOSEN_HPP

#include "orang.hpp"

namespace sim {
    class Dosen : public Orang {
    private:
        std::string nidn;
        std::string departemen;

    public:
        Dosen(std::string id, std::string nama, std::string tanggal_lahir, 
              std::string nidn, std::string departemen);
        
        void tampilkanInfo() const override;
    };
}

#endif