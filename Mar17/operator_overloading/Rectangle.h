//
// Created by Peter Vaiciulis on 3/17/23.
//

#ifndef SUPPLEMENTAL_INSTRUCTION_RECTANGLE_H
#define SUPPLEMENTAL_INSTRUCTION_RECTANGLE_H

#include <string>

class Rectangle {
public:
    Rectangle(std::string n, int l, int w) : name(n), length(l), width(w) {}
    void print();


    Rectangle operator+(Rectangle right);
    void operator++();
    Rectangle addTwoRectangles(Rectangle right);

    std::string name;
    double length;
    double width;
};


#endif //SUPPLEMENTAL_INSTRUCTION_RECTANGLE_H
