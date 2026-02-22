//
// Created by rogerio on 22/02/2026.
//

#include <stdio.h>

int main() {

    int Vi;
    float Vf;
    char Vc;
    char Vs[51];

    while (scanf("%d %f %c %[^\n]", &Vi, &Vf, &Vc, Vs) != EOF) {
        printf("%d%.6f%c%s\n", Vi, Vf, Vc, Vs);
        printf("%d\t%.6f\t%c\t%s\n", Vi, Vf, Vc, Vs);
        printf("%10d%10.6f%10c%10s\n", Vi, Vf, Vc, Vs);
    }

    return 0;
}