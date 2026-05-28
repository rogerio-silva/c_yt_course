//
// Created by rogerio on 20/05/2026.
//
#include <stdio.h>
int main() {
    int a, b, c, d, e, soma, prod;
    float med;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    soma = a + b + c + d + e;
    prod = a * b * c * d * e;
    med = soma / 5.0;
    printf("The average is: %.2f\n", med);
    printf("The product is: %i\n", prod);
    printf("The sum is: %d\n", soma);
}
