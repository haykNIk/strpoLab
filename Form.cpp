#include "Form.h"
#include <cstring>

namespace {
    void fill(char* str, unsigned int len, char c) {
        if (len == 0) return;
        for (unsigned int i = 0; i < len - 1; ++i) str[i] = c;
        str[len - 1] = '\0';
    }
}
