#ifndef TRIANGLES_HPP
#define TRIANGLES_HPP

#include "point2d.hpp"
#include <string>

namespace ZH_Geometry {
    class Triangle {
    private:
        Point2D p1, p2, p3;
        double s1, s2, s3;       // Panjang sisi
        double sq1, sq2, sq3;    // Kuadrat panjang sisi untuk akurasi siku-siku

    public:
        Triangle(Point2D p1_val, Point2D p2_val, Point2D p3_val);
        std::string getType() const;
    };
}

#endif