//
// Created by Peter Vaiciulis on 3/10/23.
//

#include <iostream>
#include "School.h"

// constructor
School::School(std::string name, int numberOfStudents, Student students[]) {
    _name = name;
    _number_of_students = numberOfStudents;
    for (int i = 0; i < numberOfStudents; i++)
    {
        _students[i] = students[i];
    }
}

std::string School::getName() {
    return _name;
}

int School::getNumberOfStudents() {
    return _number_of_students;
}

void School::setName(std::string name) {
    _name = name;
}

void School::setNumberOfStudents(int numberOfStudents) {
    _number_of_students = numberOfStudents;
}

void School::setStudent(Student student, int index) {
    _students[index] = student;
}

void School::printSchool() {
    std::cout << "School Name: " << _name << std::endl;
    std::cout << "Number of Students: " << _number_of_students << std::endl;
    for (int i = 0; i < _number_of_students; i++)
    {
        std::cout << "Student " << i + 1 << std::endl;
        _students[i].printStudent();
        std::cout << std::endl;
    }
}
