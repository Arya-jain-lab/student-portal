#include <iostream>
#include <map>
#include <string>

std::map<std::string, std::string> defaultSettings() {
    return {{"theme", "light"}, {"notifications", "on"}};
}

void updateSetting(std::map<std::string, std::string>& settings, const std::string& key, const std::string& value) {
    settings[key] = value;
}

void printSettings(const std::map<std::string, std::string>& settings) {
    for (const auto& pair : settings) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

int main() {
    auto settings = defaultSettings();
    updateSetting(settings, "theme", "dark");
    printSettings(settings);
    return 0;
}//Utility comment
