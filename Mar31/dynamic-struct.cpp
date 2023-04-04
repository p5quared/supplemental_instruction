//
// Created by Peter Vaiciulis on 3/31/23.
//
#include <iostream>
#include <string>

struct student
{
    std::string name;
    int exams[5];
    double average;
};

void something(int* ptr){
   *ptr = 5;
   ptr +=3;
    *ptr = 6;
}

int main(){
// a) Declare a pointer to the structure student and use it to create a dynamic structure.
    student *s_heap = new student;
    student s2;
    student *s_stack = &s2;
    student *s3 = s_heap;
    delete s_heap;


    // ---------------
    int *arr = new int();
    int *ptr2 = arr; // ptr2 points to arr[0]
    // before: 0 0 0 0 0
    something(ptr2);
    // after:  5 0 0 6 0
    // ptr2 points to arr[3]


    // ---------------

// b) Ask the user to enter the name of a student and his 5 exam scores.
    std::cout << "Enter the name of the student: ";
    std::cin >> s_heap->name;

    for(int i=0; i<5; i++){
        std::cout << "Enter the score of exam " << i+1 << ": ";
        std::cin >> s_heap->exams[i];
    }

    // print student to confirm
    std::cout << "Student: " << s_heap->name << std::endl;
    for(int i=0; i<5; i++){
        std::cout << "Exam " << i+1 << ": " << s_heap->exams[i] << std::endl;
    }

// c) Calculate the average of the 5 exams and assign it to the average.
    double sum = 0;
    for(int i=0; i<5; i++){
        sum += s_heap->exams[i];
    }
    s_heap->average = sum / 5;
    std::cout << "Average: " << s_heap->average << std::endl;

// d) Delete the dynamic structure.
    delete s_heap;
    s_heap = nullptr;

// e) Create a dynamic array of 10 students.
    student *students = new student[10];

// f) For each student, calculate the average of the 5 exams and assign it to the average.
    std::cout << "\nSetting all Students' test scores to random numbers...\n";
    for(int i=0; i<10; i++){
        for(int j=0; j<5; j++){
            students[i].exams[j] = rand() % 100;
        }
    }
    for(int i=0; i<10; i++){
        double one_student_average = 0;
        for(int j=0; j<5; j++){
            one_student_average += students[i].exams[j];
        }
        students[i].average = one_student_average/5;
    }
    // print out each student's_heap average
    for(int i=0; i<10; i++){
        std::cout << "Student " << i+1 << " average: " << students[i].average << std::endl;
    }

    // get the average of all students
    double all_students_average = 0;
    for(int i=0; i<10; i++){
        all_students_average += students[i].average;
    }
    all_students_average = all_students_average/10;
    std::cout << "All students average: " << all_students_average << std::endl;



// g) Delete the dynamic array.
    delete[] students;


    return 0;
}

