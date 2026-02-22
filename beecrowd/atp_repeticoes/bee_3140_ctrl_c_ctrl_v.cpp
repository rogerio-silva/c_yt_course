//
// Created by rogerio on 22/02/2026.
//

#include <iostream>
#include <string>

int main() {
    std::string line;
    bool printing = false;

    while (std::getline(std::cin, line)) {
        if (line.find("<body>") != std::string::npos) {
            printing = true;
            continue;
        }
        if (line.find("</body>") != std::string::npos) {
            printing = false;
            break;
        }
        if (printing) {
            std::cout << line << std::endl;
        }
    }

    return 0;
}