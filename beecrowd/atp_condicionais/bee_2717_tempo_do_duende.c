#include <stdio.h>

int main() {
    int n, a, b;

    if (scanf("%d", &n) != 1) return 0;
    if (scanf("%d %d", &a, &b) != 2) return 0;

    if (a + b <= n) {
        printf("Farei hoje!\n");
    } else {
        printf("Deixa para amanha!\n");
    }

    return 0;
}
