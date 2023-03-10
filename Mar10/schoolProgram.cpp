//
// Created by Peter Vaiciulis on 3/10/23.
//


#include <iostream>
#include <string>
#include "School.h"
#include "Student.h"


int main(){
    Student student1("Peter", "Computer Science", 20, 3.5, 123456, 2025);
    Student student2("John", "Computer Science", 20, 3.5, 123456, 2025);
    Student student3("Jane", "Computer Science", 20, 3.5, 123456, 2025);
    Student student4("Mary", "Computer Science", 20, 3.5, 123456, 2025);

    Student students[4] = {student1, student2, student3, student4};

    School school1("BMCC", 4, students);

    school1.printSchool();


    return 0;
}