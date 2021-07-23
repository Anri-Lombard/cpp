#include <iostream>
#include "math_utils.h"

int main() {
    std::cout << area(5) << std::endl;
    std::cout << area(10, 20) << std::endl;
    Rectangle rectangle;
    rectangle.width = 10;
    rectangle.length = 10;
    std::cout << area(rectangle) << std::endl;

    std::cout << std::endl;
    std::cout << pow(3,3) << std::endl;
    std::cout << pow(3) << std::endl;
}