#include "point2d.hpp"
#include <cmath>

namespace ZH_Geometry {
    Point2D::Point2D(double x_val, double y_val) : x(x_val), y(y_val) {}

    double Point2D::getX() const { return x; }
    double Point2D::getY() const { return y; }

    double Point2D::distanceSquaredTo(const Point2D& other) const {
        return std::pow(other.x - x, 2) + std::pow(other.y - y, 2);
    }

    double Point2D::distanceTo(const Point2D& other) const {
        return std::sqrt(distanceSquaredTo(other));
    }
}