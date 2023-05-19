//
// Created by Peter Vaiciulis on 5/18/23.
//

#include <iostream>


int main(){
    int x = 1;

    try{
        std::cout << "Inside try\n";
        if(x < 0)
            throw x;
        std::cout << "After throw\n";
    }catch(int x){
        std::cout << "Caught X: " << x << std::endl;
    }
    std::cout << "After catch" << std::endl;

    return 0;
}