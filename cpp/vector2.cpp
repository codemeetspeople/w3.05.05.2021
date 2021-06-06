#include <iostream>
#include <cmath>

class Vector {
    private:
        double x;
        double y;
        double x_bkp;
        double y_bkp;

    public:
        Vector (double x, double y) {
            this->x = x;
            this->y = y;
            this->x_bkp = x;
            this->y_bkp = y;
        }

        double getX() const {
            return this->x;
        }

        double getY() const {
            return this->y;
        }

        void setX(double value) {
            this->x = value;
        }

        void setY(double value) {
            this->y = value;
        }

        double vectorDistance(const Vector& other) const {
            return hypot(this->x-other.x, this->y-other.y);
        }

        bool operator==(const Vector& other) const {
            return this->x == other.x && this->y == other.y;
        }

        bool operator!=(const Vector& other) const {
            return !(*this == other);
        }

        Vector operator+(const Vector& other) const {
            Vector sum = Vector(this->x+other.x, this->y+other.y);
            return sum;
        }

        Vector operator-(const Vector& other) const {
            Vector sum = Vector(this->x-other.x, this->y-other.y);
            return sum;
        }

        void operator+=(const Vector& other) {
            this->x += other.x;
            this->y += other.y;
        }

        void operator-=(const Vector& other) {
            this->x -= other.x;
            this->y -= other.y;
        }

        void reset() {
            this->x = this->x_bkp;
            this->y = this->y_bkp;;
        }
    };

std::ostream& operator<<(std::ostream& out, const Vector& p) {
    out << '(' << p.getX() << ", " << p.getY() << ')';
    return out;
};


int main() {
    Vector a = Vector(1, 4);
    Vector b = Vector(3, 2);
    //Vector c = a + b;

    std::cout << a << std::endl;
    a += b;
    std::cout << a << std::endl;
    a.reset();
    a -= b;
    std::cout << a << std::endl;
    a.reset();
    std::cout << a << std::endl;


    /*if ( a == b ) {
        std::cout << a << " == " << b << std::endl;
    } else {
        std::cout << a << " != " << b << std::endl;
    }*/

    // std::cout << "Increment " << a << "-" << b << " = " << a.Increment(b) << std::endl;
    // std::cout << "Sum " << a << " + " << b << " = " << (a + b) << std::endl;
    // std::cout << "Diff " << a << " - " << b << " = " << (a - b) << std::endl;
    // std::cout << "Distance from " << a << " to " << b << " = " << a.vectorDistance(b) << std::endl;


    return 0;
}
