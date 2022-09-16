//
// Created by hyde on 15/09/22.
//

#ifndef RATIONALEXERCICE_RATIONAL_H
#define RATIONALEXERCICE_RATIONAL_H
#include <iostream>
namespace Rational_lib {

    class Rational {
    public:
        Rational(){};
        Rational(const Rational& r );
        Rational(int _numerator, int _denominator);
        int Numerator() const {return numerator;};
        int Denominator() const {return denominator;};
//        int Numerator(int _numerator);
//        int Denominator(int _denominator);
        class Invalid { };
    private:
        int numerator{1};
        int denominator{1};
    };
    std::ostream &operator<<(std::ostream& os, const Rational& r);
    Rational operator+(const Rational& r, const Rational& p);
    Rational operator-(const Rational& r, const Rational& p);
    Rational operator*(const Rational& r, const Rational& p);
    Rational operator/(const Rational& r, const Rational& p);

    int LowCommonMultiple(const int& a, const int& b);

} // Rational_lib

#endif //RATIONALEXERCICE_RATIONAL_H
