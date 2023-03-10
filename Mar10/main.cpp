#include <iostream>
#include "Student.h"
#include "Student.cpp"

int multiplyByFive(int number);
int multiplyByFiveHeap(int number);



int main() {
    // stack allocation
    int number = 0;

    // heap allocation
    int* heapNumber = new int;

    int* stackPtr = &number;
    int* heapPtr = heapNumber;

    multiplyByFive(5);

    for (int i = 0; i < 1000000; i++)
    {
        multiplyByFiveHeap(5);
    }

    std::cout << "Student 1\n";
    Student student1 = Student();
    student1.printStudent();

    std::cout << "Student 2\n";
    Student* student2 = new Student("Peter", "Computer Science", 21, 3.5, 123456, 2023);
    student2->printStudent();

    std::cout << "Student 3\n";
    Student student3;

    student3.printStudent();

    delete student2;





    return 0;
}


int multiplyByFive(int number)
{
    int multiplier = 5;


    return number * multiplier;
}

int multiplyByFiveHeap(int number)
{
    int* multiplier = new int;


    *multiplier = 5;
    int product = number * (*multiplier);
    delete multiplier;

    return product;
}
