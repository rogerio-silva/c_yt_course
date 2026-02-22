//
// Created by rogerio on 22/02/2026.
//

#include <iostream>

int main() {
    int n, meninas=0, meninos=0;
    std::string nome;
    char sexo;
    std::cin >> n;
    while (n-->0) {
        std::cin >> nome >> sexo;
        if (sexo == 'F') meninas++;
        else meninos++;
    }
    std::cout << meninos << " carrinhos" << std::endl;
    std::cout << meninas << " bonecas" << std::endl;
    return 0;
}