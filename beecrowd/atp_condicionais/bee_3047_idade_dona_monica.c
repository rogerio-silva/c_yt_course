//
// Created by rogerio on 22/02/2026.
//
#include <stdio.h>

int main() {
    int iM, iF1, iF2, iF3, iMax;
    scanf("%d", &iM);
    scanf("%d", &iF1);
    scanf("%d", &iF2);

    iF3 = iM - iF1 - iF2;

    iMax = iF1;
    iMax = (iF2 > iMax) ? iF2 : iMax;
    iMax = (iF3 > iMax) ? iF3 : iMax;

    printf("%d\n", iMax);
    return 0;
}