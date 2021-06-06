#ifndef PAPER_HPP
#define PAPER_HPP


#include <iostream>

class OutOfSpaceException {};

class Paper {
    private:
        int maxSysmbols;
        std::string content;

    public:
        Paper(int maxSysmbols=4096);

        int getMaxSymbols() const;
        int getSymbols() const;
        const std::string& getContent() const;

        void addContent(const std::string& message);
};

std::ostream& operator<<(std::ostream& out, const Paper paper);

#endif // PAPER_HPP
