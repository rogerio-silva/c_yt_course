//
// Created by rogerio on 23/02/2026.
//

#include <stdio.h>

int main() {

    int b,g;
    scanf("%i%i", &b, &g);
    if (b >= (g/2)) {
        printf("Amelia tem todas bolinhas!\n");
    } else {
        printf("Faltam %i bolinha(s)\n",(g/2)-b);
    }

    return 0;
}