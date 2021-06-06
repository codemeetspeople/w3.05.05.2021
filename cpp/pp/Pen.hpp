#ifndef PEN_HPP
#define PEN_HPP

#include <iostream>
#include "Paper.hpp"

class OutOfInkException {};

class Pen {
    private:
        int amount;
        int capacity;

    public:
        Pen(int capacity=1024);

        int getAmount() const;
        int getCapacity() const;

        void refill();

        void write(Paper& paper, const std::string& message);
};

std::ostream& operator<<(std::ostream& out, const Pen pen);

#endif // PEN_HPP
