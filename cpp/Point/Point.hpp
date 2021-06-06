#include <iostream>

class Point {
    private:
        double x;
        double y;

    public:
        Point(double x, double y);
        Point();

        double getX() const;
        double getY() const;

        void setX(double value);
        void setY(double value);

        double distance(const Point& other) const;

        bool operator==(const Point& other) const;
        bool operator!=(const Point& other) const;
        Point operator+(const Point& other) const;
};

std::ostream& operator<<(std::ostream& out, const Point& p);
