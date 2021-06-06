#include "Gun.hpp"

Gun::Gun(const std::string& model, int capacity) {
    this->amount = 0;
    this->capacity = capacity;
    this->isReady = false;
    this->model = model;
    this->totalShots = 0;
}
Gun::~Gun() {}

int Gun::getAmount() const {
    return this->amount;
}

int Gun::getCapacity() const {
    return this->capacity;
}

bool Gun::ready() const {
    return this->isReady;
}

const std::string& Gun::getModel() const {
    return this->model;
}

int Gun::getTotalShots() const {
    return this->totalShots;
}

void Gun::prepare() {
    this->isReady = !this->isReady;
}

void Gun::reload() {
    this->amount = this->capacity;
}

void Gun::shoot() {
    if ( !ready() ) {
       throw NotReady();
    }

    if ( amount == 0 ) {
       throw OutOfRounds();
    }

    std::cout << "Bang!" << std::endl;

    this->amount -= 1;
    this->totalShots += 1;
}

std::ostream& operator<<(std::ostream& out, const Gun& gun) {
    out << gun.model << "[";
    if ( gun.isReady ) {
        out << "ready, ";
    } else {
        out << "not ready, ";
    }
    out << gun.capacity << "/" << gun.amount << ", ";
    out << gun.totalShots << "]";
    return out;
}

