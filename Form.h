#pragma once

class Form {
public:
    explicit Form(unsigned int offset) : m_offset(offset) {}
    virtual ~Form() = default;
    virtual void draw() const = 0;
protected:
    unsigned int m_offset;
};
