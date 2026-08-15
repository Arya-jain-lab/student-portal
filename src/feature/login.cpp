#include <iostream>
#include <string>

bool validateUsername(const std::string& username) {
    return username.length() >= 3 && username.length() <= 20;
}

bool validatePassword(const std::string& password) {
    return password.length() >= 8;
}

std::string generateSessionToken(const std::string& username) {
    return username + "_session_" + std::to_string(rand() % 100000);
}

int main() {
    std::cout << "Login module loaded." << std::endl;
    return 0;
}
