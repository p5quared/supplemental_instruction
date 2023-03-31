//
// Created by Peter Vaiciulis on 3/17/23.
//

#include "Shapes.h"

#include <iostream>

void Rectangle::print() {
    std::cout << "Name: " << _name << "\n";
    std::cout << "Length: " << length << " Width: " << width << "\n\n";
}

int Rectangle::getArea() {
    return length * width;
}

void Circle::print() {
    std::cout << "Name: " << _name << "\n";
    std::cout << "Radius: " << radius << "\n\n";
}

int Circle::getArea() {
    // pi * r^2
    return 3.14 * radius * radius;
}