#include <iostream>
using std::cout;

int main() {
    // short a;
    // int b;
    // long c;
    // long long d;
    // unsigned short aa;
    // unsigned int bb;
    // unsigned long cc;
    // unsigned long long dd;

    // cout << sizeof(short) << " " << sizeof(int) << " " << sizeof(long) << " " << sizeof(double) << std::endl;

    // cout << ULONG_LONG_MAX << std::endl;

    // // ASCII table
    // // numbers max = 127 for signed char
    // // unsigned char much more
    // char x = 'B';
    // cout << (int) x << std::endl;
    // x = 'a';
    // cout << (int) x << std::endl;

    // // Strings
    // std::string greeting = "Hello";
    // std::string complete_greeting = greeting + " there";
    // std::cout << complete_greeting << std::endl;
    // std::cout << complete_greeting.length() << std::endl;

    // Better strings
    std::string greeting;
    getline(std::cin, greeting);
    std::cout << greeting << std::endl;

    greeting.insert(3, "    ");
    std::cout << greeting << std::endl;
    greeting.erase(2, 1);
    greeting.pop_back();
    std::cout << greeting << std::endl;
}