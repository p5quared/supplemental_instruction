//
// Created by Peter Vaiciulis on 3/10/23.
//

#ifndef SUPPLEMENTAL_INSTRUCTION_SCHOOL_H
#define SUPPLEMENTAL_INSTRUCTION_SCHOOL_H

#include "Student.h"

static const Student _STUDENTS = Student();

class School {
    public:
    School(std::string name, int numberOfStudents, Student students[]);

    std::string getName();
    int getNumberOfStudents();

    void setName(std::string name);
    void setNumberOfStudents(int numberOfStudents);
    void setStudent(Student student, int index);
    void setTwodArray(int* twodArray);

    void printSchool();
    // one-d array
    void printTwodArray();
    int* _twodArray;

    private:
    std::string _name;
    int _number_of_students;
    Student _students[4];

};


#endif //SUPPLEMENTAL_INSTRUCTION_SCHOOL_H
