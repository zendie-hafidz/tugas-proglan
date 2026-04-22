#include <iostream>
#include <iomanip>
#include "point2d.hpp"
#include "triangles.hpp"

// Menggunakan custom namespace yang telah dibuat
using namespace ZH_Geometry; 

int main() {
    std::cout << "========================================\n";
    std::cout << "  Program Klasifikasi Segitiga Simple\n";
    std::cout << "========================================\n\n";

    // 1. Segitiga Siku-Siku (Triple Pythagoras 3-4-5)
    Triangle t1(Point2D(0, 0), Point2D(3, 0), Point2D(0, 4));
    std::cout << "[Test 1] (0,0), (3,0), (0,4)       -> Tipe: " << t1.getType() << "\n";

    // 2. Segitiga Sama Kaki
    Triangle t2(Point2D(0, 0), Point2D(4, 0), Point2D(2, 5));
    std::cout << "[Test 2] (0,0), (4,0), (2,5)       -> Tipe: " << t2.getType() << "\n";

    // 3. Segitiga Sama Sisi (Tinggi = a/2 * sqrt(3))
    double y_sama_sisi = 2.0 * 1.73205080757;
    Triangle t3(Point2D(0, 0), Point2D(4, 0), Point2D(2, y_sama_sisi));
    std::cout << "[Test 3] (0,0), (4,0), (2,3.464)   -> Tipe: " << t3.getType() << "\n";

    // 4. Segitiga Sembarang
    Triangle t4(Point2D(0, 0), Point2D(5, 1), Point2D(2, 6));
    std::cout << "[Test 4] (0,0), (5,1), (2,6)       -> Tipe: " << t4.getType() << "\n";

    return 0;
}