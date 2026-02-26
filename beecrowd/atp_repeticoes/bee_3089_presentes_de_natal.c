#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) == 1 && n != 0) {
        int num_presentes = 2 * n;
        long long x[20000];
        for (int i = 0; i < num_presentes; i++) {
            scanf("%lld", &x[i]);
        }

        long long max_par = -1;
        long long min_par = -1;

        for (int i = 0; i < n; i++) {
            long long soma_par = x[i] + x[num_presentes - 1 - i];
            if (i == 0) {
                max_par = soma_par;
                min_par = soma_par;
            } else {
                if (soma_par > max_par) {
                    max_par = soma_par;
                }
                if (soma_par < min_par) {
                    min_par = soma_par;
                }
            }
        }

        printf("%lld %lld\n", max_par, min_par);
    }
    return 0;
}
