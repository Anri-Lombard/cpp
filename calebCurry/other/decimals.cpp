#include <iostream>
#include <string>
int main() {
    int number = 0x30; // 48
    std::cout << number << std::endl;

    std::cout << std::oct << number << std::endl;
    std::cout << std::hex << number << std::endl;
}