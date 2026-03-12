#include <iostream>
#include <vector>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long calcularMDC(const vector<long long>& vetor, int a, int b) {
    long long resultado = vetor[a];
    for (int i = a + 1; i <= b; i++) {
        resultado = gcd(resultado, vetor[i]);
        if (resultado == 1) break;
    }
    return resultado;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    while (cin >> n >> q) {
        vector<long long> vetor(n);

        for (int i = 0; i < n; i++) {
            cin >> vetor[i];
        }

        // Processar queries
        for (int i = 0; i < q; i++) {
            int tipo;
            cin >> tipo;

            if (tipo == 1) {
                int a, b;
                long long v;
                cin >> a >> b >> v;

                a--; b--;

                for (int j = a; j <= b; j++) {
                    vetor[j] += v;
                }
            } else {
                int a, b;
                cin >> a >> b;
                a--; b--;

                long long mdc = calcularMDC(vetor, a, b);
                cout << mdc << "\n";
            }
        }
    }

    return 0;
}

