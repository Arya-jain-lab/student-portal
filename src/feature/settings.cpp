#include <iostream>
#include <map>
#include <string>

std::map<std::string, std::string> defaultSettings() {
    return {{"theme", "light"}, {"notifications", "on"}};
}