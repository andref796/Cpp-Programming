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

    void Rational::Simplify() {
        int divisor = GreatCommonDivisor(this->Numerator(), this->Denominator());
        if (divisor == 0) return;
        this->Numerator(this->Numerator()/divisor);
        this->Denominator(this->Denominator()/divisor);
    }

    std::ostream &operator<<(std::ostream& os, const Rational& r){
        std::cout << r.Numerator() << "/" << r.Denominator() << std::endl;
    };

    Rational operator+(const Rational& r, const Rational& p){
        int lcm = LowCommonMultiple(r.Denominator(),p.Denominator());
        Rational result{(r.Numerator()*(lcm/r.Denominator())+p.Numerator()*(lcm/p.Denominator())),lcm};
        result.Simplify();
        return result;
    };

    Rational operator-(const Rational& r, const Rational& p){
        int lcm = LowCommonMultiple(r.Denominator(),p.Denominator());
        Rational result{(r.Numerator()-p.Numerator()),lcm};
        result.Simplify();
        return result;
    };

    Rational operator*(const Rational& r, const Rational& p){
        Rational result {(r.Numerator()*p.Numerator()), (r.Denominator()*p.Denominator()) };
        result.Simplify();
        return result;
    };
    Rational operator/(const Rational& r, const Rational& p){
        Rational result {(r.Numerator()*p.Denominator()), (r.Denominator()*p.Numerator()) };
        result.Simplify();
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

    int GreatCommonDivisor(const int&a, const int& b){
        int _a = abs(a);
        int _b = abs(b);
        int min = std::min(a,b);
        for (;min > 0; min--){
            if(a % min == 0 && b % min == 0) break;
        }
        return min;
    };

    double Rational2Double(const Rational& r){
        return (double) r.Numerator() / (double) r.Denominator();
    };

} // Rational_lib