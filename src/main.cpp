#include <iostream>
#include <string>

void printWelcomeMessage() {
    std::cout << "      Welcome to Student Portal System!       " << std::endl;
}


void greetUser() {
    std::cout << "Hello, Developer!" << std::endl;
}

int addNumbers(int a, int b) {
    return a + b;
}
int divide(int a, int b) {
    if (b == 0) {
        std::cout << "Error: Cannot divide "<< endl;
        return 0;
    }
    return a / b;
}
int main() {
    printWelcomeMessage();
    greetUser();

    int num1 = 5;
    int num2 = 10;
    int result = addNumbers(num1, num2);

    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << result << std::endl;
    std::cout << "Program finished successfully." << std::endl;
	int divResult = divide(num1, num2);
    std::cout << "The result of " << num1 << " divided by " << num2 << " is: " << divResult << std::endl;
    return 0;
}
