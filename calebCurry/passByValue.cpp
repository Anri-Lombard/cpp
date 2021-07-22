#include <iostream>
#include <vector>

// pass by reference 
void swap(int & a, int& b, int c, int d) {
    int temp = a;
    a = b;
    b = temp;
    temp = c;
    c = d;
    d = temp;

    std::cout << "a: " << a << "\tb: " << b << "\n";
    std::cout << "c: " << c << "\td: " << d << "\n";
}

int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    swap(a, b, c, d);
    std::cout << "a: " << a << "\tb: " << b << "\n";
    std::cout << "c: " << c << "\td: " << d << "\n";

    return 0;
}

// sending value to function is pass by value, but arrays are pass by pointer

// Pass by reference: manually send it like an array; Prefrix param with &
// THis way the stored value is changed entirely and not just the stored value
