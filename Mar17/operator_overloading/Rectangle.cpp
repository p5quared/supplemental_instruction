//
// Created by Peter Vaiciulis on 3/17/23.
//

#include "Rectangle.h"

#include <iostream>

void Rectangle::print() {
    std::cout << "Name: " << name << "\n";
    std::cout << "Length: " << length << " Width: " << width << "\n\n";
}

Rectangle Rectangle::operator+(Rectangle right) {
    Rectangle combined = Rectangle(name, length + right.length, width + right.width);
    return combined;
}

void Rectangle::operator++(){
    length++;
    width++;
}

Rectangle Rectangle::addTwoRectangles(Rectangle right) {
    Rectangle combined = Rectangle(name, length + right.length, width + right.width);
    return combined;
}