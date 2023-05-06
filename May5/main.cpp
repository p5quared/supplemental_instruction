//
// Created by Peter Vaiciulis on 5/5/23.
//

#include <iostream>
#include <vector>

int smallest_in_two_rows(int arr[4][4], int row1, int row2){
    int smallest = arr[row1][0];

    for(int i=0; i<4; i++){
        if (arr[row1][i] < smallest)
            smallest = arr[row1][i];

        if (arr[row2][i] < smallest)
            smallest = arr[row2][i];
    }

    return smallest;
}

class Person {
public:
    Person(std::string name, int age) : _name(name), _age(age) {}
    std::string getName() { return _name; }
    int getAge() { return _age; }

    virtual void print(){
        std::cout << "Name: " << _name << "\n";
        std::cout << "Age: " << _age << "\n";
    };

private:
    int _age;
    std::string _name;
};

class Student : public Person {
//public:
//    Person(std::string name, int age) : _name(name), _age(age) {}
//    std::string getName() { return _name; }
//    int getAge() { return _age; }
//private:
//    std::string _name;
//    int _age;
public:
    Student(std::string name, int age, int grade) : Person(name, age), _grade(grade) {}
    int getGrade() { return _grade; }
    void print() override {
        Person::print();
        std::cout << "Grade: " << _grade << "\n";
    }

private:
    int _grade;
};

class Teacher : public Person {
public:
    Teacher(std::string name, int age, int salary) : Person(name, age), _salary(salary) {}
    int getSalary() { return _salary; }
    void print() override {
        Person::print();
        std::cout << "Salary: " << _salary << "\n";
    }

private:
    int _salary;
};

void printPeople(std::vector<Person*> people){
    for (auto &person : people){
        person->print();
    }
}

template<typename T>
T add(T a, T b){
    return a + b;
}


int main() {
    int arr[4][4] = {
            {1, 10, 3, 4},
            {5, 1, 30, 8},
            {9 ,3, 11, 12},
            {13, 14, 2, 16}
    };
//    std::cout << smallest_in_two_rows(arr, 2, 3) << "\n";

    Person jake = Person("jake", 23);
    Person rachel = Person("rachel", 23);
    Student peter = Student("Peter", 23, 100);
    Teacher john = Teacher("John", 45, 100000);

//    jake.print();
//    peter.print();
//    john.print();

    std::vector<Person*> people;
    people.push_back(&jake);
    people.push_back(&rachel);
    people.push_back(&peter);
    people.push_back(&john);


//    printPeople(people);

    std::cout << add(1, 2) << "\n";
    std::cout << add(1.2, 3.4) << "\n";
    std::string a = "abra";
    std::string b = "cadabra";
    std::cout << add(a,b) << "\n";



    return 0;
}
