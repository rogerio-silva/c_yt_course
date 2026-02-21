#include <stdio.h>

int main() {
    int Q, D, P;
    do {
        scanf("%d", &Q);
        if (Q != 0) {
            scanf("%d %d", &D, &P);
            int total_paginas = (D * Q * P) / (P - Q);
            if (total_paginas == 1) {
                printf("%d pagina\n", total_paginas);
            } else {
                printf("%d paginas\n", total_paginas);
            }
        }
    } while (Q != 0);
    return 0;
}

