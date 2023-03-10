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
    School school2("BMCC", 4, students);

    int* oneD_array = new int[2];
    oneD_array[0] = 1;
    oneD_array[1] = 2;
    // int oneD_array[2] = {1, 2};

    school1.setTwodArray(oneD_array);
    school2.setTwodArray(oneD_array);



    std::cout <<"Before change\n";
    std::cout << "School 1\n";
    school1.printTwodArray();

    std::cout << "School 2\n";
    school2.printTwodArray();

    school1._twodArray[0] = 3;
    std::cout << "After change\n";

    std::cout << "School 1\n";
    school1.printTwodArray();

    std::cout << "School 2\n";
    school2.printTwodArray();



    return 0;
}