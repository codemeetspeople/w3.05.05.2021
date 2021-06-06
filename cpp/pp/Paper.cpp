#include "Paper.hpp"

Paper::Paper(int maxSysmbols) {
    this->maxSysmbols = maxSysmbols;
}

int Paper::getMaxSymbols() const {
    return this->maxSysmbols;
}

const std::string& Paper::getContent() const {
    return this->content;
}

void Paper::addContent(const std::string& message) {
    if ( this->maxSysmbols <= this->content.length() ) {
        throw OutOfSpaceException();
    }
    int available = this->maxSysmbols - this->content.length();
    if ( message.length() > available ) {
        this->content += message.substr(0, available);
        return;
    }
    this->content += message;
}

std::ostream& operator<<(std::ostream& out, const Paper paper) {
    out << "Paper(" << paper.getMaxSymbols() << "/";
    out << paper.getContent().length() << ")";
    return out;
}
