#include <iostream>

struct Point {
    double x;
    double y;
};


void initPoint(Point& p) {
    p.x = 10;
    p.y = 10;
}


std::ostream& operator<<(std::ostream& out, const Point& p) {
    out << '(' << p.x << ", " << p.y << ')';
    return out;
}

int main() {
    Point a = {1, 2};

    initPoint(a);

    std::cout << a << std::endl;

    return 0;
}
