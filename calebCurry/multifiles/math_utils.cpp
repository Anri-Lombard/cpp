#include "math_utils.h"

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