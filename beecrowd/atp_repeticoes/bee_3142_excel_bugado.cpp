#include <iostream>
#include <string>
#define MAX_VAL 16384
// XFD = 24*26^2 + 6*26^1 + 4*26^0 = 16224 + 156 + 4 = 16384

int main() {
    std::string s;
    while (std::cin >> s) {
        if (s.length() > 3) {
            std::cout << "Essa coluna nao existe Tobias!" << std::endl;
            continue;
        }
        long long result = 0;
        long long power = 1;
        for (int i = s.length() - 1; i >= 0; --i) {
            result += (s[i] - 'A' + 1) * power;
            power *= 26;
        }
        if (result > MAX_VAL) {
            std::cout << "Essa coluna nao existe Tobias!" << std::endl;
        } else {
            std::cout << result << std::endl;
        }
    }
    return 0;
}
