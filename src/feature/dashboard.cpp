#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> getEnrolledCourses() {
    return {"Data Structures", "Operating Systems", "Databases"};
}

void printCourses(const std::vector<std::string>& courses) {
    for (const auto& c : courses) {
        std::cout << "- " << c << std::endl;
    }
}