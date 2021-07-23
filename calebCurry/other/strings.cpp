#include <iostream>
#include <string>

int main() {
    std::string greetings = "What is up?";
    if(greetings == "Hello") std::cout << "Equals" << std::endl;
    if(greetings.compare("What is up?")==0) std::cout << "Not Equals" << std::endl;
}