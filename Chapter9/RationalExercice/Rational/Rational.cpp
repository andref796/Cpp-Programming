//
// Created by hyde on 15/09/22.
//

#include "Rational.h"

namespace Rational_lib {

    Rational::Rational(const Rational& r) {
        this->numerator = r.Numerator();
        this->denominator = r.Denominator();
    }
    Rational::Rational(int _numerator, int _denominator):
    numerator(_numerator), denominator(_denominator){
        if(denominator == 0) throw Invalid{};
        if(denominator < 0) numerator = -numerator;
    };

    std::ostream &operator<<(std::ostream& os, const Rational& r){
        std::cout << r.Numerator() << "/" << r.Denominator() << std::endl;
    };

    Rational operator+(const Rational& r, const Rational& p){
        int lcm = LowCommonMultiple(r.Denominator(),p.Denominator());

        Rational result{(r.Numerator()*(lcm/r.Denominator())+p.Numerator()*(lcm/p.Denominator())),lcm};
        return result;
    };

    Rational operator-(const Rational& r, const Rational& p){
        int lcm = LowCommonMultiple(r.Denominator(),p.Denominator());
        Rational result{(r.Numerator()-p.Numerator()),lcm};
        return result;
    };

    Rational operator*(const Rational& r, const Rational& p){
        Rational result {(r.Numerator()*p.Numerator()), (r.Denominator()*p.Denominator()) };
        return result;
    };
    Rational operator/(const Rational& r, const Rational& p){
        Rational result {(r.Numerator()*p.Denominator()), (r.Denominator()*p.Numerator()) };
        return result;
    };

    int LowCommonMultiple(const int& a, const int& b){
        int lcm;
        (a > b) ? lcm = a : lcm = b;
        for(int multiple = 1; (lcm % a) != 0 && (lcm % b) != 0; multiple++){
            lcm *= multiple;
        };
        return lcm;
    };

} // Rational_lib