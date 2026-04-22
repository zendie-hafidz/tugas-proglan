#ifndef POINT2D_HPP
#define POINT2D_HPP

namespace ZH_Geometry {
    class Point2D {
    private:
        double x;
        double y;
    public:
        // Constructor dengan default parameters
        Point2D(double x_val = 0.0, double y_val = 0.0);
        
        // Getter
        double getX() const;
        double getY() const;
        
        // Fungsi kalkulasi jarak
        double distanceSquaredTo(const Point2D& other) const;
        double distanceTo(const Point2D& other) const;
    };
}

#endif