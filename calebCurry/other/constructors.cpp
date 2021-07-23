#include <iostream>
#include <vector>

class User {
    // std::string status = "Gold";
    public:
        std::string first_name;
        std::string last_name;
        std::string status;
        std::string get_status() {
            return status;
        }
        User() {
            std::cout << "Constructor";
        }
        User(std::string first_name, std::string last_name, std::string status) {
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
        }
        ~User() {
            std::cout << "Destructor" << std::endl;
        }
};

int main() {
    const User user("Anri", "Lombard", "Diamond");
    std::cout << user.first_name << user.last_name << user.status << std::endl;
}