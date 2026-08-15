#include <iostream>
#include <string>

bool validateUsername(const std::string& username) {
    return username.length() >= 3 && username.length() <= 20;
}

bool validatePassword(const std::string& password) {
    return password.length() >= 8;
}

int main() {
    std::cout << "Login module loaded." << std::endl;
    return 0;
}
