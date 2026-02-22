//
// Created by rogerio on 22/02/2026.
//
#include <stdio.h>

int main() {
    int H, E, A, O, W, X;
    if (scanf("%d %d %d %d %d %d", &H, &E, &A, &O, &W, &X) == 6) {
        int bem = H + E + A + X;
        int mal = O + W;

        if (bem >= mal) {
            printf("Middle-earth is safe.\n");
        } else {
            printf("Sauron has returned.\n");
        }
    }
    return 0;
}
