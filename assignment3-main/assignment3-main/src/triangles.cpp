#include "triangles.hpp"
#include <cmath>
#include <algorithm>
#include <vector>

namespace ZH_Geometry {
    Triangle::Triangle(Point2D p1_val, Point2D p2_val, Point2D p3_val) 
        : p1(p1_val), p2(p2_val), p3(p3_val) {
        
        s1 = p1.distanceTo(p2);
        s2 = p2.distanceTo(p3);
        s3 = p3.distanceTo(p1);

        sq1 = p1.distanceSquaredTo(p2);
        sq2 = p2.distanceSquaredTo(p3);
        sq3 = p3.distanceSquaredTo(p1);
    }

    std::string Triangle::getType() const {
        // Toleransi presisi floating-point untuk perbandingan double
        const double EPSILON = 1e-5; 

        bool isSamaSisi = (std::abs(s1 - s2) < EPSILON) && (std::abs(s2 - s3) < EPSILON);
        
        bool isSamaKaki = (std::abs(s1 - s2) < EPSILON) || 
                          (std::abs(s2 - s3) < EPSILON) || 
                          (std::abs(s3 - s1) < EPSILON);

        // Sorting sisi kuadrat untuk mengecek Teorema Pythagoras dengan mudah
        std::vector<double> sqSides = {sq1, sq2, sq3};
        std::sort(sqSides.begin(), sqSides.end());
        
        // Cek siku-siku: a^2 + b^2 = c^2
        bool isSikuSiku = std::abs((sqSides[0] + sqSides[1]) - sqSides[2]) < EPSILON;

        if (isSamaSisi) return "Sama Sisi";
        if (isSikuSiku && isSamaKaki) return "Siku-Siku Sama Kaki"; 
        if (isSikuSiku) return "Siku-Siku";
        if (isSamaKaki) return "Sama Kaki";
        
        return "Sembarang";
    }
}