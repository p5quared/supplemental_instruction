//
// Created by Peter Vaiciulis on 3/17/23.
//
#include "Shapes.h"
#include <string>
#include <iostream>
#include <vector>

int main(void) {

    Rectangle r1 = Rectangle("RectangleA", 10, 20);
    Circle circle1 = Circle("CircleA", 10);

    std::vector<Shape*> shapes;
    shapes.push_back(&r1);
    shapes.push_back(&circle1);

    std::cout << "Printing all shapes:\n";
    for (auto shape : shapes) {
        shape->print();
    }

    return 0;
}

/*
 * Operation: +, *, ^
 * Operands: 1, 3, 23123, .112349321
 *
 * Combined:
 * 1 + 3,   23123 * 1
 * */