//
// Created by Peter Vaiciulis on 3/31/23.
//

#include <vector>
#include <iostream>

std::vector<int> one_dim = {1, 2, 3, 4, 5, 6, 7, 8};
std::vector<std::vector<int>> two_dim = {
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
};



int main(){
    /*
     *  two_dim[0][7] = one_dim[0]
     *  two_dim[1][6] = one_dim[1]
     *  two_dim[2][5] = one_dim[2]
     *  two_dim[3][4] = one_dim[3]
     *  two_dim[4][3] = one_dim[4]
     *  two_dim[5][2] = one_dim[5]
     *  ...
     * */
    for(int row=0; row<8; row++){
        two_dim[row][row] = one_dim[row];
        two_dim[row][7-row] = one_dim[row];
    }


    // Print the 2D vector
    for(auto i : two_dim){
        for(auto j : i){
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}