//
// Created by Peter Vaiciulis on 3/17/23.
//

#ifndef SUPPLEMENTAL_INSTRUCTION_RECTANGLE_H
#define SUPPLEMENTAL_INSTRUCTION_RECTANGLE_H

#include <string>
#include <iostream>


class Shape {
public:
    Shape(std::string name, int sides) : _name(name), _numberOfSides(sides) {}
    std::string _name;
    int _numberOfSides;


    virtual void print() = 0;
    virtual int getArea() = 0;
private:
    int something;
protected:
    int somethingElse;
};


class Rectangle : public Shape {
public:
    Rectangle(std::string n, int l, int w) : Shape(n, 4), length(l), width(w) {}


    void print() override;
    int getArea() override;

    int length;
    int width;
};

class Circle : public Shape {
public:
    Circle(std::string n, int r) : Shape(n, 1), radius(r) {}



    void print() override;
    int getArea() override;

    int radius;
};


//class Rectangle {
//public:
//    Rectangle(std::string n, int l, int w) : name(n), length(l), width(w) {}
//    void print();
//
//
//    Rectangle operator+(Rectangle right);
//    bool operator==(Rectangle right);
//    void operator++();
//    Rectangle addTwoRectangles(Rectangle right);
//
//    std::string name;
//    double length;
//    double width;
//};


#endif //SUPPLEMENTAL_INSTRUCTION_RECTANGLE_H
