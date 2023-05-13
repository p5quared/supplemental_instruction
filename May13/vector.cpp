//
// Created by Peter Vaiciulis on 5/13/23.
//

#include <iostream>
#include <vector>


class Node {
public:
    Node(int data) : data(data) {}
    int getData() const { return data; }
    void setData(int data) { this->data = data; }
private:
    int data;
};

int main(){
    std::vector<Node*> vec;
    vec.push_back(new Node(1));
    vec.push_back(new Node(2));
    vec.push_back(new Node(3));
    // vec = {1,2,3};

//    for(int i = 0; i < vec.size(); i++){
//        std::cout << vec[i] << std::endl;
//        // or std::cout << vec.at(i) << std::endl;
//    }
//    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
//        std::cout << *it << std::endl;
//    }
    for(auto n : vec){
        std::cout << n << std::endl;
    }
    vec.clear();

}