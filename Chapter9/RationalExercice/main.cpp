#include <iostream>
#include "Rational.h"

int main(){
    Rational_lib::Rational r1{1,2};
    std::cout << r1;
    Rational_lib::Rational r2{1,2};
    std::cout << r2;
    Rational_lib::Rational r3 = r1 + r2;
    std::cout << r3;
    Rational_lib::Rational r4 = r1 - r2;
    std::cout << r4;
    Rational_lib::Rational r5 = r1 * r2;
    std::cout << r5;
    Rational_lib::Rational r6 = r1 / r2;
    std::cout << r6;
}