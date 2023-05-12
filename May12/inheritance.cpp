//
// Created by Peter Vaiciulis on 5/12/23.
//

#include <iostream>
using namespace std;

class Base1 {
 public:
     Base1()
     {
         cout << " Base1's constructor called" << endl;
     }
};

class Derived1 : Base1 {
 public:
     Derived1()
     {
         cout << "Derived1's constructor called" << endl;  }
};

class Derived2 : public Derived1 {
   public:
     Derived2()
     {  cout << "Derived2's constructor called" << endl;  }
};

void inside3(){
    throw std::runtime_error("inside3");
}

void inside2(){
    try{
        inside3();
    }catch (int e){
        cout << "caught @inside2 " << e << endl;
    }
}

void inside1(){
    try{
        inside2();
    }catch(std::string e){
        cout << "caught @inside1 " << e << endl;
    }
}

int main()
{
    Derived2 d2;

    try{
        inside1();
    } catch (int e) {
        cout << "caught " << e << endl;
    }
    return 0;
}