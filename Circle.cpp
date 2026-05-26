#include "Circle.h"
#include <iostream>

Circle::Circle(unsigned int offset) : Form(offset) {}

void Circle::draw() const {
    for (unsigned int i = 0; i < m_offset; ++i) std::cout << ' ';
    std::cout << "  ****  " << std::endl;
    for (unsigned int i = 0; i < m_offset; ++i) std::cout << ' ';
    std::cout << " *    * " << std::endl;
    for (unsigned int i = 0; i < m_offset; ++i) std::cout << ' ';
    std::cout << "*      *" << std::endl;
    for (unsigned int i = 0; i < m_offset; ++i) std::cout << ' ';
    std::cout << " *    * " << std::endl;
    for (unsigned int i = 0; i < m_offset; ++i) std::cout << ' ';
    std::cout << "  ****  " << std::endl;
}
