//
// Created by Peter Vaiciulis on 3/17/23.
//

#include "Student.h"

#include <iostream>

void Student::print() {
    std::cout << "Name: " << _name << " Age: " << _age << std::endl;

    std::cout << "Grades: ";
    int grades_total = 0;
    for (int i = 0; i < _numGrades; i++)
    {
        std::cout << _grades[i] << " ";
        grades_total += _grades[i];
    }

    std::cout << std::endl;

    std::cout << "GPA: " << grades_total / _numGrades << std::endl;
    std::cout << "\n";
}

void Student::addGrade(int grade) {
    _grades[_numGrades] = grade;
    _numGrades++;
}

Student::Student(const Student& other_student){
    _name = other_student._name;
    _age = other_student._age;
    _numGrades = other_student._numGrades;

    // instead of temp._grades = other_student._grades
    for (int i = 0; i < other_student._numGrades; i++)
    {
        _grades[i] = other_student._grades[i];
    }
}
