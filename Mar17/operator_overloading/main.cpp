//
// Created by Peter Vaiciulis on 3/17/23.
//
#include "Rectangle.h"
#include <string>

int main(int argc, const char * argv[]) {

    Rectangle r1 = Rectangle("RectangleA", 10, 20);
    r1.print();

    Rectangle r2 = Rectangle("RectangleB", 30, 40);
    r2.print();

    // These three statements are equivalent:
    Rectangle r3 = r1 + r2;
    r3.print();

    Rectangle r4 = r1.operator+(r2);
    r4.print();

    Rectangle r5 = r1.addTwoRectangles(r2);
    r5.print();

    // Silly overload
    for(Rectangle r("loop-rectangle", 5, 10); r.length < 20; ++r){
        r.print();
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