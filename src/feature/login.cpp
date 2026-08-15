#include <iostream>
#include <string>

bool validateUsername(const std::string& username) {
    return username.length() >= 3 && username.length() <= 20;
}

bool validatePassword(const std::string& password) {
    return password.length() >= 8;
}

void handleLoginError(const std::string& reason) {
    std::cout << "Login failed: " << reason << std::endl;
}

std::string generateSessionToken(const std::string& username) {
    return username + "_session_" + std::to_string(rand() % 100000);
}

int main() {
    std::string username = "arya123";
    std::string password = "securepass";

    if (!validateUsername(username)) {
        handleLoginError("Invalid username");
        return 1;
    }
    if (!validatePassword(password)) {
        handleLoginError("Invalid password");
        return 1;
    }
    std::string token = generateSessionToken(username);
    std::cout << "Login successful. Token: " << token << std::endl;
    return 0;
}
