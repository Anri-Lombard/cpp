#ifndef MATH_UTILS // directive
#define MATH_UTILS

struct Rectangle {
    double length;
    double width;
};

double area(int side);

double area(int length, int width);

double area(Rectangle rectangle);

double pow(double base, int pow);

double pow(double base);

#endif // !MATH_UTILS