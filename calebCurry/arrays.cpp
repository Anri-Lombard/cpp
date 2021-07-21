#include <iostream>


int main() {
    // arrays are statically sized
    int guesses[] = {10, 13, 54, 42, 12, 12, 13};
    int size = sizeof(guesses) / sizeof(int);


    std::cin >> guesses[5];
    std::cout << guesses[5] << std::endl;
    std::cout << size << std::endl;

    return 0;
}