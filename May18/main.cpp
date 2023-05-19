//
// Created by Peter Vaiciulis on 5/18/23.
//

#include <iostream>

class shape {
public:
    shape() { std::cout << "shape constructor\n"; }
    virtual ~shape() { std::cout << "shape destructor\n"; }
    virtual float area() = 0;
    virtual float perimeter() = 0;
protected:
    float _area;
};

class circle : public shape {
public:
    circle(float radius) : _radius(radius) { std::cout << "circle constructor\n"; }
    ~circle() { std::cout << "circle destructor\n"; }
    virtual float area() { return 3.14 * _radius * _radius; }
    virtual float perimeter() override { return 2 * 3.14 * _radius; }
    float function(){
        return _area;
    }

protected:
    float _radius;
};

class rectangle : public shape {
public:
    rectangle(float width, float height) : _width(width), _height(height) { std::cout << "rectangle constructor\n"; }
    ~rectangle() { std::cout << "rectangle destructor\n"; }
    virtual float area() { return _width * _height; }
    virtual float perimeter() { return 2 * (_width + _height); }
private:
    float _width;
    float _height;
};


void printShape(shape* s){
    std::cout << "printing shape\n";
    std::cout << "shape area: " << s->area() << "\n";
    std::cout << "shape perimeter: " << s->perimeter() << "\n";
}


int main(){
    shape* r1 = new rectangle(2, 3);
    shape* c1 = new circle(2);

    printShape(r1);
    printShape(c1);





    return 0;
}