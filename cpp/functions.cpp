#include <iostream>

template<typename Type>
Type increment(Type value) {
    return value + 1;
}

int increment(int value) {
    return value + 10;
}

int main() {
    std::cout << increment(10) << std::endl;
    std::cout << increment<int>(10) << std::endl;
    std::cout << increment('A') << std::endl;
    std::cout << increment(10.1) << std::endl;
    return 0;
}
