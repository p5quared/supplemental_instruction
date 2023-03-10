//
// Created by Peter Vaiciulis on 3/10/23.
//

#ifndef SUPPLEMENTAL_INSTRUCTION_STUDENT_H
#define SUPPLEMENTAL_INSTRUCTION_STUDENT_H

#include <string>

class Student {
public:
    // Constructors:
    Student();
    Student(std::string firstName, std::string major, int age, float gpa, int id, int graduationYear);

    // Destructor:
    ~Student();

    std::string getFirstName();
    std::string getMajor();
    int getAge();
    float getGpa();
    int getId();

    void setFirstName(std::string firstName);
    void setMajor(std::string major);
    void setAge(int age);
    void setGpa(float gpa);
    void setId(int id);

    void printStudent();

private:
    std::string _firstName;
    std::string _major;
    int* _age;
    float _gpa;
    int _id;
    int _graudation_year;
    int _age_at_graduation;
};


#endif //SUPPLEMENTAL_INSTRUCTION_STUDENT_H
