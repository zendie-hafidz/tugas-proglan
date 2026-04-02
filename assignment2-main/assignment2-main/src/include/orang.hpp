#ifndef ORANG_HPP
#define ORANG_HPP

#include <string>

namespace sim {
    class Orang {
    protected:
        // Protected agar bisa diakses oleh class turunannya
        std::string id;
        std::string nama;
        std::string tanggal_lahir;

    public:
        // Constructor
        Orang(std::string id, std::string nama, std::string tanggal_lahir);
        
        // Virtual destructor sangat penting untuk inheritance di C++
        virtual ~Orang() = default; 

        // Virtual method untuk memfasilitasi polymorphism
        virtual void tampilkanInfo() const;
    };
}

#endif