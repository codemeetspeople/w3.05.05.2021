#include "Pen.hpp"

Pen::Pen(int capacity) {
    this->capacity = capacity;
    this->amount = capacity;
}

int Pen::getAmount() const {
    return this->amount;
}

int Pen::getCapacity() const {
    return this->capacity;
}

void Pen::refill() {
    this->amount = this->capacity;
}

void Pen::write(Paper& paper, const std::string& message) {
    if ( this->amount == 0 ) {
        throw OutOfInkException();
    }
    if ( message.length() > this->amount ) {
        paper.addContent(message.substr(0, this->amount));
        this->amount = 0;
        return;
    }
    paper.addContent(message);
    this->amount -= message.length();
}

std::ostream& operator<<(std::ostream& out, const Pen pen) {
    out << "Pen(" << pen.getCapacity() << "/";
    out << pen.getAmount() << ")";
    return out;
}