//
// Created by Peter Vaiciulis on 4/4/23.
//

#include "Rational.h"

Rational::Rational(int num, int den) {
    numerator = num;
    denominator = den;
}

// rational1 == rational2
// rational1.operator==(rational2);
bool Rational::operator==(const Rational &right) const {
    return (numerator == right.numerator && denominator == right.denominator);
}

bool operator==(const Rational &left, const Rational &right) {
    return (left.numerator == right.numerator && left.denominator == right.denominator);
}

// cin >> rational
// cin.operator>>(rational);
std::istream& operator>>(std::istream& os, const Rational& r) {

    return os;
}

// cout << rational
// cout.operator<<(rational);
