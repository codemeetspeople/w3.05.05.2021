#include <iostream>
#include <cmath>

class Point {
    private:
        double x;
        double y;

    public:
        // Constructor (initializer)
        Point(double x, double y) {
            this->x = x;
            this->y = y;
        }

        // Getters (accessors)
        double getX() const {
            return this->x;
        }

        double getY() const {
            return this->y;
        }

        // Setters (mutators)
        void setX(double value) {
            this->x = value;
        }

        void setY(double value) {
            this->y = value;
        }

        double distance(const Point& other) const {
            return hypot(this->x-other.x, this->y-other.y);
        }

        bool operator==(const Point& other) const {
            return this->x == other.x && this->y == other.y;
        }

        bool operator!=(const Point& other) const {
            return !(*this == other);
        }

        Point operator+(const Point& other) const {
            Point sum = Point(this->x+other.x, this->y+other.y);
            return sum;
        }
};


std::ostream& operator<<(std::ostream& out, const Point& p) {
    out << '(' << p.getX() << ", " << p.getY() << ')';
    return out;
}


int main() {
    Point a = Point(1, 4);
    Point b = Point(3, 2);
    Point c = a + b;


    if ( a == b ) {
        std::cout << a << " == " << b << std::endl;
    } else {
        std::cout << a << " != " << b << std::endl;
    }

    std::cout << "Distance from " << a << " to " << b << " = " << a.distance(b) << std::endl;


    return 0;
}
