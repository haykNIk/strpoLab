#include "Triangle.h"
#include <iostream>

Triangle::Triangle(unsigned int offset) : Form(offset) {}

void Triangle::draw() const {
    for (unsigned int i = 0; i < m_offset; ++i) std::cout << ' ';
    std::cout << "  /\\" << std::endl;
    for (unsigned int i = 0; i < m_offset; ++i) std::cout << ' ';
    std::cout << " /  \\" << std::endl;
    for (unsigned int i = 0; i < m_offset; ++i) std::cout << ' ';
    std::cout << "/____\\" << std::endl;
}
