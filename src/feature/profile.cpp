#include <iostream>
#include <string>

struct UserProfile {
    std::string name;
    std::string email;
};

void displayProfile(const UserProfile& profile) {
    std::cout << "Name: " << profile.name << ", Email: " << profile.email << std::endl;
}