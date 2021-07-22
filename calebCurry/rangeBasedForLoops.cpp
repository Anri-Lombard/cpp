#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2 ,3};

    // for (int i=0; i <= vec.size(); i++) {
    //     std::cout << vec[i] << std::endl;
    // }

    for(int item: vec) {
        std::cout << item << std::endl;
    }
}