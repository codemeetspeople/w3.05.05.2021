#include <iostream>
#include "Paper.hpp"
#include "Pen.hpp"

int main() {
    Pen pen = Pen(13);
    Paper paper = Paper();

    std::cout << pen << std::endl;
    std::cout << paper << std::endl;
    pen.write(paper, "Hello, world!");

    try {
        pen.write(paper, "Hello, world!");
    } catch ( OutOfInkException obj ) {
        pen.refill();
        pen.write(paper, "Hello, world!");
    }

    std::cout << paper.getContent() << std::endl;

    std::cout << pen << std::endl;
    std::cout << paper << std::endl;

    return 0;
}
