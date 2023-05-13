//
// Created by Peter Vaiciulis on 5/13/23.
//


#include <iostream>
#include <utility>
#include <vector>
#include <string>

class Person{
public:
    Person(std::string name, int age) : _name(std::move(name)), _age(age){
//        std::cout << "Person constructor\n"
    }
    std::string getName() const { return _name; }
    int getAge() const { return _age; }

    virtual void print(){
        std::cout << "Person!\n";
        std::cout << "Name: " << _name << "\n";
        std::cout << "Age: " << _age << "\n";
    };

private:
    int _age;
    std::string _name;
};

class Student : public Person {
public:
    Student(std::string name, int age, int grade) : Person(std::move(name), age), _grade(grade) {
//        std::cout << "Student constructor\n";
    }
    int getGrade() const { return _grade; }
    void print() override {
        std::cout << "Student!\n";
        Person::print();
        std::cout << "Grade: " << _grade << "\n";
    }

private:
    int _grade;
};

class Teacher : public Person {
public:
    Teacher(std::string name, int age,  std::string subject) : Person(std::move(name), age), _subject(std::move(subject)) {
//        std::cout << "Teacher constructor\n";
    }
    std::string getSubject() const { return _subject; }
    void print() override {
        std::cout << "Teacher!\n";
        Person::print();
        std::cout << "Subject: " << _subject << "\n";
    }

private:
    std::string _subject;
};


void displayClassroom(const std::vector<Person*>& classroom){
    for(auto p : classroom){
        p->print();
    }
}

class Shape {
public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
    virtual std::string type() const = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(double width, double height) : _width(width), _height(height) {}
    double getArea() override { return _width * _height; }
    double getPerimeter() override { return 2 * (_width + _height); }
    std::string type() const { return _type; }
private:
    double _width;
    double _height;
    std::string _type = "Rectangle";
};

class Circle : public Shape {
public:
    Circle(double radius) : _radius(radius) {}
    double getArea() override { return 3.14 * _radius * _radius; }
    double getPerimeter() override { return 2 * 3.14 * _radius; }
    std::string type() const { return _type; }
private:
    double _radius;
    std::string _type = "Circle";
};


int main(){
    std::vector<Person*> classroom;
    classroom.push_back(new Person("Peter", 23));
    classroom.push_back(new Student("Student", 23, 100));
    classroom.push_back(new Teacher("Teacher", 23, "CS"));
    displayClassroom(classroom);

    std::cout << "\n\n";
    std::vector<Shape*> shapes;
    shapes.push_back(new Rectangle(10, 20));
    shapes.push_back(new Circle(10));
    for(auto s : shapes){
        std::cout << "Type: " << s->type() << "\n";
        std::cout << "Area: " << s->getArea() << "\n";
        std::cout << "Perimeter: " << s->getPerimeter() << "\n";
    }

    return 0;
}