#include <iostream>
#include <string>

struct UserProfile {
    std::string name;
    std::string email;
};

void displayProfile(const UserProfile& profile) {
    std::cout << "Name: " << profile.name << ", Email: " << profile.email << std::endl;
}

void updateEmail(UserProfile& profile, const std::string& newEmail) {
    profile.email = newEmail;
}

int main() {
    UserProfile profile = {"Arya Jain", "arya@example.com"};
    displayProfile(profile);
    updateEmail(profile, "new_arya@example.com");
    displayProfile(profile);
    return 0;
}