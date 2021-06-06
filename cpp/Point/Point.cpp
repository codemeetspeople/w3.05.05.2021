#include <cmath>
#include "Point.hpp"


Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

Point::Point() {
    this->x = 0.0;
    this->y = 0.0;
}

double Point::getX() const {
    return this->x;
}

double Point::getY() const {
    return this->y;
}

void Point::setX(double value) {
    this->x = value;
}

void Point::setY(double value) {
    this->y = value;
}

double Point::distance(const Point& other) const {
    return hypot(this->x-other.x, this->y-other.y);
}

bool Point::operator==(const Point& other) const {
    return this->x == other.x && this->y == other.y;
}

bool Point::operator!=(const Point& other) const {
    return !(*this == other);
}

Point Point::operator+(const Point& other) const {
    Point sum = Point(this->x+other.x, this->y+other.y);
    return sum;
}

std::ostream& operator<<(std::ostream& out, const Point& p) {
    out << '(' << p.getX() << ", " << p.getY() << ')';
    return out;
}
