//
// Created by Peter Vaiciulis on 5/13/23.
//


#include <iostream>

template<typename numberType, size_t N>
numberType arr_sum(const numberType (&arr)[N]){
    numberType sum = 0;
    for(int i = 0; i < N; i++){
        sum += arr[i];
    }
    return sum;
}

template<typename numberTypeA, typename numberTypeB>
numberTypeA add(numberTypeA a, numberTypeB b){
    return a + b;
}


int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    float arr2[10] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0, 8.0, 9.0, 10.0};
    double arr3[10] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0, 8.0, 9.0, 10.0};

    int int_sum = arr_sum(arr);
    std::cout << int_sum << std::endl;

    float float_sum = arr_sum(arr2);
    std::cout << float_sum << std::endl;

    double double_sum = arr_sum(arr3);
    std::cout << double_sum << std::endl;

    int a = 1;
    float b = 2.0;
    int sum = add(a, b);
    std::cout << sum << std::endl;
}