#include <iostream>
#include <cmath>

struct Point {
    double x;
    double y;
};

bool operator==(Point a, Point b) {
    return a.x == b.x && a.y == b.y;
}

bool operator!=(Point a, Point b) {
    return !(a == b);
}

std::ostream& operator<<(std::ostream& out, const Point& p) {
    out << '(' << p.x << ", " << p.y << ')';
    return out;
}

double pointDistance(Point a, Point b) {
    return hypot(b.x-a.x, b.y-a.y);
}


int main() {
    Point a = {1, 1};
    Point b = {2, 2};

    if ( a == b ) {
        std::cout << a << " == " << b << std::endl;
    } else {
        std::cout << a << " != " << b << std::endl;
    }

    return 0;
}
