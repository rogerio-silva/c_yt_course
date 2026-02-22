//
// Created by rogerio on 22/02/2026.
#include <iostream>

int main() {
    int n, x, d;
    int resJoao, resMaria;
    std::cin >> n;
    while (n-->0) {
        resJoao=0; resMaria=0;
        for (int i = 0; i < 3; i++) {
            std::cin >> x >> d;
            resJoao+=(x*d);
        }
        for (int i = 0; i < 3; i++) {
            std::cin >> x >> d;
            resMaria+=(x*d);
        }
        if (resJoao>resMaria) std::cout << "JOAO" << std::endl;
        else std::cout << "MARIA" << std::endl;
    }
    return 0;
}