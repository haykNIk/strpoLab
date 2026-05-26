#pragma once
#include "Form.h"

class Triangle : public Form {
public:
    explicit Triangle(unsigned int offset);
    void draw() const override;
};
