#include <iostream>
#include "QuadraticEquation.h"
#include "LinearEquation.h"
#include <math.h>

QuadraticEquation::QuadraticEquation(double a, double b, double c) : a(a), b(b), c(c) {}

void QuadraticEquation::solve() {
    if(a == 0){
        std::cout << "Function is Linear" << std::endl
        LinearEquation linearEquation(b, c);
        linearEquation.solve();
    }

    double delta = pow(b, 2) - (4 * a * c);

    if(delta < 0){
        std::cout << "No solution" << std::endl;
    }
    if(delta == 0){
        std::cout << "One solution:" << std::endl;
        std::cout << "Root = "  << -b / (2 * a) << std::endl;
    }
    if(delta > 0){
        std:cout << "Two solutions: " << std::endl;
        std::cout << "Root 1 = " << (-b - sqrt(delta)) / (2 * a) << std::endl;
        std::cout << "Root 2 = " << (-b + sqrt(delta)) / (2 * a) << std::endl;
    }
}