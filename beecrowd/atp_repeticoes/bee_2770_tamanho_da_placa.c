#include <stdio.h>

int main() {
    int x, y, m;
    int xi, yi;

    while (scanf("%d %d %d", &x, &y, &m) != EOF) {
        for (int i = 0; i < m; i++) {
            if (scanf("%d %d", &xi, &yi) != 2) break;

            if ((xi <= x && yi <= y) || (xi <= y && yi <= x)) {
                printf("Sim\n");
            } else {
                printf("Nao\n");
            }
        }
    }

    return 0;
}
