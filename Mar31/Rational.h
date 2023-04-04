//
// Created by Peter Vaiciulis on 4/4/23.
//
#include <iostream>

#ifndef SUPPLEMENTAL_INSTRUCTION_RATIONAL_H
#define SUPPLEMENTAL_INSTRUCTION_RATIONAL_H


class Rational
{
private:
    int numerator;
    int denominator;
public:
    Rational () { numerator = 1; denominator = 1;}
    Rational(int ,int);
    friend std::istream& operator>>(std::istream& os, const Rational& r);

    // Overload == and >> operators
    bool operator==(const Rational &right) const;
    friend bool operator==(const Rational &left, const Rational &right);
    friend std::istream& operator>>(std::istream& os, const Rational& r);
};




#endif //SUPPLEMENTAL_INSTRUCTION_RATIONAL_H
