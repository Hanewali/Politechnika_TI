#include <iostream>
#include "QuadraticEquation.h"
#include "LinearEquation.h"

int main() {
    QuadraticEquation quadraticEquation(1.0, -3.0, 2.0);
    quadraticEquation.solve();

    LinearEquation linearEquation(2.0, -3.0);
    linearEquation.solve();

    return 0;
}