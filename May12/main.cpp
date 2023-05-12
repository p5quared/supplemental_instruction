//
// Created by Peter Vaiciulis on 5/12/23.
//
#include <vector>
#include <string>
#include <iostream>

template<typename T>
T add(T a, T b) {
    return a + b;
}

template<typename T>
class coordinate {
public:
    coordinate(T x, T y) : x(x), y(y) {}
    bool operator==(const coordinate &other) const {
        return x == other.x && y == other.y;
    }
    coordinate operator+(const coordinate &other) const {
        return coordinate(x + other.x, y + other.y);
    }
    void print(){
        std::cout << "x: " << x << "\n";
        std::cout << "y: " << y << "\n";
    }
private:
    T x;
    T y;
};


class Month {
public:
    Month(int month) : _month(month) {}
    Month(std::string month) {
        for(int i=0; i<12; i++){
            if (month == _months[i]){
                _month = i + 1;
                return;
            }
        }
        _month = 0;
    }
    Month(const Month &other) : _month(other._month) {}

    std::string getMonth() const {
        return _months[_month - 1];
    }
    void operator++(){
        _month++;
        if (_month > 12)
            _month = 1;
    }
    void operator+(int a){
        _month += a;
        _month %= 12;
    }
    bool operator!=(const Month &other) const {
        return _month != other._month;
    }
private:
    int _month;
    std::string _months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September",
                               "October", "November", "December"};
};

class Roomba {
public:
    Roomba(coordinate<int> position) : _position(position) {}
    Roomba(int x, int y) : _position(x, y) {}
private:
    coordinate<int> _position;
};

class World {
private:
    int boundary_x;
    int boundary_y;
    std::vector<Roomba> roombas;
};

int main() {
    /* Operators:
     * + - * / % += -= *= /= %= == != > < >= <= && || ! & | ^ ~ << >>
     *
     * Operator Overloading:
     * We define how operators work for our classes
     */
//    Month m1("May");
//
//    std::cout << m1.getMonth() << "\n";
//    ++m1;
//    std::cout << m1.getMonth() << "\n";




//    for(Month m = Month("May"); m != Month("January"); ++m){
//        std::cout << m.getMonth() << "\n";
//    }
//
//    std::cout << "***************************\n";
//    Month m1("May");
//    std::cout << m1.getMonth() << "\n";
//    m1 + 11;
//    std::cout << m1.getMonth() << "\n";



    return 0;
}