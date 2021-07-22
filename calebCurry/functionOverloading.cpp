#include <iostream>

struct Rectangle {
    double length;
    double width;
};

double area(int side) {
    return side * side;
}

double area(int length, int width) {
    return length * width;
}

double area(Rectangle rectangle) {
    return rectangle.length * rectangle.width;
}

double pow(double base, int pow) {
    int total = 1;
    for (int i = 0; i < pow; i++) {
        total *= base; 
    }
    return total;
}

double pow(double base) {
    return base * base;
}

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