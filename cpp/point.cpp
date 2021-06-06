#include <iostream>
#include <cmath>

struct Point {
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
};

bool operator==(const Point& a, const Point& b) {
    return a.getX() == b.getX() && a.getX() == b.getY();
}

bool operator!=(const Point& a, const Point& b) {
    return !(a == b);
}

Point operator+(const Point& a, const Point& b) {
    Point sum = Point(a.getX()+b.getX(), a.getY()+b.getY());
    return sum;
}

std::ostream& operator<<(std::ostream& out, const Point& p) {
    out << '(' << p.getX() << ", " << p.getY() << ')';
    return out;
}

double pointDistance(const Point& a, const Point& b) {
    return hypot(b.getX()-a.getY(), b.getX()-a.getY());
}


int main() {
    Point a = Point(1, 1);
    Point b = Point(2, 2);
    Point c = a + b;

    a.setX(42);

    if ( a == b ) {
        std::cout << a << " == " << b << std::endl;
    } else {
        std::cout << a << " != " << b << std::endl;
    }

    std::cout << c << std::endl;

    return 0;
}
