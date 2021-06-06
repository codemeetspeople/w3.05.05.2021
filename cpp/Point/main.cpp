#include <iostream>
#include "Point.hpp"


int main() {
    Point a = Point(1, 10);
    Point b = Point();

    if ( a != b ) {
        std::cout << a << " != " << b << std::endl;
    } else {
        std::cout << a << " == " << b << std::endl;
    }

    return 0;
}