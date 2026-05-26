#pragma once
#include "Form.h"

class Circle : public Form {
public:
    explicit Circle(unsigned int offset);
    void draw() const override;
};
