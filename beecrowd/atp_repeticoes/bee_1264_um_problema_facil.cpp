#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int charToValue(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'A' && c <= 'Z') return c - 'A' + 10;
    if (c >= 'a' && c <= 'z') return c - 'a' + 36;
    return -1;
}

void solve() {
    string r;
    while (cin >> r) {
        int max_digit = 0;
        long long sum_digits = 0;
        
        bool start = false;
        for (char c : r) {
            if (c == '-') continue;
            int val = charToValue(c);
            if (val == -1) continue;
            sum_digits += val;
            if (val > max_digit) max_digit = val;
            start = true;
        }

        if (!start) {
            // Caso de string vazia ou apenas '-' (não esperado pelo enunciado, mas por segurança)
            // No entanto, o enunciado diz "Nenhum número inválido será dado como entrada."
            // Se for "0", max_digit é 0.
        }

        int min_base = max(2, max_digit + 1);
        bool found = false;
        for (int n = min_base; n <= 62; ++n) {
            if (sum_digits % (n - 1) == 0) {
                cout << n << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "such number is impossible!" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
