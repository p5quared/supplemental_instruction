//
// Created by Peter Vaiciulis on 5/4/23.
//

#ifndef SUPPLEMENTAL_INSTRUCTION_MAMMAL_H
#define SUPPLEMENTAL_INSTRUCTION_MAMMAL_H

#include <string>

class Mammal {
public:
    Mammal() : warm_blooded(true){};
    bool is_warm_blooded();
    bool has_hair();
    bool has_milk();
protected:
    void set_age(int age);
    int age;

private:
    bool warm_blooded;
};

class Dog : private Mammal{
public:
    Dog() : Mammal(), breed("unknown"){};
    Dog(std::string breed) : Mammal(), breed(breed){};
    std::string get_breed();
    void set_breed(std::string breed);


private:
    std::string breed;
};

class Human : public Mammal{

};


#endif //SUPPLEMENTAL_INSTRUCTION_MAMMAL_H
