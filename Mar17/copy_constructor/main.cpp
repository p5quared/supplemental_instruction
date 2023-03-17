//
// Created by Peter Vaiciulis on 3/17/23.
//
#include "Student.h"
#include <iostream>

int main(){

        Student s1("Peter", 20);
        s1.addGrade(90);
        s1.addGrade(80);
        s1.addGrade(70);
        s1.print();

        Student twins_combined("JohnBrothers", 21);
        twins_combined.addGrade(100);
        twins_combined.addGrade(90);
        twins_combined.addGrade(80);
        twins_combined.print();

        // JohnBrothers is the student that is two twin brothers.
        // So far they have the exact same _name, _age, and _grades.
        // We want to seperate them by giving them different names.

        Student john1 = twins_combined;
        john1._name = "John1";
        john1.print();

        Student john2 = twins_combined;
        john2._name = "John2";
        john2.print();



        // Now the semester keeps going... and John1 gets a 100 on his final exam.
        // and John2 gets a 0 on his final exam.

        john1.addGrade(100);
        john2.addGrade(0);

        std::cout << "--------After the final:--------\n";
        john1.print();
        john2.print();

        return 0;


}