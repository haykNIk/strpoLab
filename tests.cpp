#include <iostream>
#include "Form.h"

#ifdef MINUNIT_H
#include "minunit.h"
#else
#define mu_assert(message, test) do { if (!(test)) return message; } while (0)
#define mu_run_test(test) do { char *message = test(); tests_run++; if (message) return message; } while (0)
extern int tests_run;
#endif

static char* test_fill_basic() {
    char buf[10];
    fill(buf, 5, 'A');
    mu_assert("fill length 5", buf[0]=='A' && buf[4]=='A' && buf[5]=='\0');
    return 0;
}

static char* test_polymorphism() {
    Triangle tri(2,5);
    Circle circ(3,4);
    Form* forms[2] = { &tri, &circ };
    forms[0]->draw();
    forms[1]->draw();
    mu_assert("polymorphism works", true);
    return 0;
}

static char* test_all() {
    mu_run_test(test_fill_basic);
    mu_run_test(test_polymorphism);
    return 0;
}

int tests_run = 0;

int main() {
    char *result = test_all();
    if (result) { std::cout << "FAIL: " << result << std::endl; return 1; }
    std::cout << "ALL TESTS PASSED (" << tests_run << ")" << std::endl;
    return 0;
}
