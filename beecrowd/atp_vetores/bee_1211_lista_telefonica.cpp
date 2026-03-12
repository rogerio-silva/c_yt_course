#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    while(cin >> n) {
        vector<string> phones(n);

        for(int i = 0; i < n; i++) {
            cin >> phones[i];
        }

        // Ordenar os telefones lexicograficamente
        sort(phones.begin(), phones.end());

        int total = 0;

        // Para cada telefone a partir do segundo
        for(int i = 1; i < n; i++) {
            int prefixo_igual = 0;

            // Contar dígitos iniciais iguais ao número anterior
            for(int j = 0; j < (int)phones[i].length(); j++) {
                if(phones[i][j] == phones[i-1][j]) {
                    prefixo_igual++;
                } else {
                    break;  // Para quando encontra diferença
                }
            }

            total += prefixo_igual;
        }

        cout << total << "\n";
    }

    return 0;
}

