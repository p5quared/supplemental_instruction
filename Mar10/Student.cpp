//
// Created by Peter Vaiciulis on 3/10/23.
//

#include "Student.h"
#include <iostream>

Student::Student() {
    std::cout << "Student default-constructor called.\n";
    _firstName = "default";
    _major = "";

    _age = new int;
    *_age = 0;

    _gpa = 0.0;
    _id = 0;
}

Student::Student(std::string firstName, std::string major, int age, float gpa, int id, int graduationYear) {
    std::cout << "Student custom-constructor called.\n";
    _firstName = firstName;
    _major = major;
    _age = new int;
    *_age = age;

    _gpa = gpa;
    _id = id;
    _graudation_year = graduationYear;
    int year = 2023;
    _age_at_graduation = *_age + (_graudation_year - year);
}


void Student::printStudent() {
    std::cout << "First Name: " << _firstName << std::endl;
    std::cout << "Major: " << _major << std::endl;
    std::cout << "Age: " << *_age << std::endl;
    std::cout << "GPA: " << _gpa << std::endl;
    std::cout << "ID: " << _id << std::endl;
}

Student::~Student() {
    std::cout << "Student destructor called on " << _firstName << std::endl;
    delete _age;
    delete[] _array;
}