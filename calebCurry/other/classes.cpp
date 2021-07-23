#include <iostream>
#include <vector>

// struct User {
//     std::string first_name;
//     std::string last_name;
//     std::string get_status() {
//         return status;
//     }
//     private:
//         std::string status = "Gold";
// }


//To class

class User {
    std::string status = "Gold";
    public:
        std::string first_name;
        std::string last_name;
        std::string get_status() {
            return status;
        }
};

int add_unique_user(std::vector<User> &users, User user) {
    for (int i = 0; i < users.size(); i++) {
        if(users[i].first_name == user[i].first_name && users[i].last_name == user[i].last_name)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
}

int main() {
    User user;
    user.first_name = "Caleb";
    User user2;
    user2.first_name = "Anri";

    std::vector<User> users;
    users.push_back(user);
    users.push_back(user2);

    std::cout << users[0].first_name << std::endl;
    std::cout << users[1].first_name << std::endl;
    return 0;
}