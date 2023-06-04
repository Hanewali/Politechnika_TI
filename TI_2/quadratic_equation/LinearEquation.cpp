#include <iostream>
#include "LinearEquation.h"

LinearEquation::LinearEquation(double a, double b) : a(a), b(b) {}

void LinearEquation::solve() {
    if (a == 0) {
        if (b == 0) {
            std::cout << "The equation is always true (infinite solutions)" << std::endl;
        } else {
            std::cout << "No solution" << std::endl;
        }
    } else {
        std::cout << "Root = " << -b / a << std::endl;
    }
}