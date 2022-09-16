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
        void Numerator(int _numerator) {this->numerator = _numerator;};
        void Denominator(int _denominator)  {this->denominator = _denominator;};
        void Simplify();
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
    int GreatCommonDivisor(const int&a, const int& b);
    double Rational2Double(const Rational& r);
} // Rational_lib

#endif //RATIONALEXERCICE_RATIONAL_H
