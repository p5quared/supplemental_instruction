//
// Created by Peter Vaiciulis on 3/17/23.
//

#ifndef SUPPLEMENTAL_INSTRUCTION_STUDENT_H
#define SUPPLEMENTAL_INSTRUCTION_STUDENT_H

#include <string>


class Student {
public:
    Student(std::string name, int age) : _name(name), _age(age) {};
    Student(const Student& other_student);
    void print();

    void addGrade(int grade);

    int* _grades = new int[100];
    int _numGrades = 0;
    std::string _name;
    int _age;
};


#endif //SUPPLEMENTAL_INSTRUCTION_STUDENT_H
