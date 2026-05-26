#include "Circle.h"
#include <iostream>
#include "Form.h"

Circle::Circle(unsigned int offset) : Form(offset) {}

void Circle::draw() const {
    const unsigned int MAX = 100;
    char spaces[MAX];
    internal::fill(spaces, m_offset + 1, ' ');
    std::cout << spaces << "  ****  " << std::endl;
    std::cout << spaces << " *    * " << std::endl;
    std::cout << spaces << "*      *" << std::endl;
    std::cout << spaces << " *    * " << std::endl;
    std::cout << spaces << "  ****  " << std::endl;
}
