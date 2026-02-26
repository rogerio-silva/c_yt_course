#include <iostream>
#include <vector>

using namespace std;

void countDigits(int n, vector<long long>& counts) {
    if (n <= 0) return;
    long long factor = 1;
    long long lower = 0;
    int current = 0, upper = 0;

    while (n / factor > 0) {
        lower = n % factor;
        current = (n / factor) % 10;
        upper = n / (factor * 10);

        for (int i = 0; i < 10; i++) {
            if (i > 0) {
                counts[i] += (long long)upper * factor;
                if (current > i) counts[i] += factor;
                else if (current == i) counts[i] += lower + 1;
            } else {
                // Dígito 0: evita zeros à esquerda
                if (upper > 0) {
                    counts[0] += (long long)(upper - 1) * factor;
                    if (current > 0) counts[0] += factor;
                    else counts[0] += lower + 1;
                }
            }
        }
        factor *= 10;
    }
}

int main() {
    int a, b;
    while (cin >> a >> b && (a != 0 || b != 0)) {
        vector<long long> countsA(10, 0);
        vector<long long> countsB(10, 0);

        countDigits(b, countsB);
        countDigits(a - 1, countsA);

        for (int i = 0; i < 10; i++) {
            cout << countsB[i] - countsA[i] << (i == 9 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}
