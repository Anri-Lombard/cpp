#include <iostream>

// Plain old data structs: PODS
struct User {
    std::string first_name;
    std::string last_name;
    std::string get_status() {
        return status;
    }
    private:
        std::string status = "Awesome";
};

int main() {
    User me;
    me.first_name = "Caleb";
    me.last_name = "Curry";

    User she;
    she.first_name = "Carrol";
    she.last_name = "Dweck";

    std::cout << "First name; " << me.first_name << std::endl;
    std::cout << "First name; " << she.first_name << std::endl;
    std::cout << "They are " << she.get_status() << std::endl;

    return 0;
}