// 1. function
// 2. method
// 3. static method
// 4. constructor

// All used in OOP

// multidimenstional aarays and vectors
#include <iostream>
#include <vector>

int main() {
    // Nested vector
    std::vector<std::vector<int>> grades = {{1,2,3}, {4,5,6}, {7,7,9}};


    for(int i=0; i < 3; i++) {
        for (int x=0; x<3; x++) {
            std::cout << grades[i][x] << "\t";
        }
        std::cout << "\n";
    }



    return 0;
}