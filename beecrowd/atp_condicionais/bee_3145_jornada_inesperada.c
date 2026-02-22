//
// Created by rogerio on 22/02/2026.
//
#include <stdio.h>

int main() {
    int N, X;
    if (scanf("%d %d", &N, &X) == 2) {
        double dias = (double)X / (N + 2);
        printf("%.2f\n", dias);
    }
    return 0;
}
