#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int x, y, z;

    // Expressões aritméticas
    x = a + b * c;
    y = (a + b) * c;
    z = a + b % c;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    // Expressões lógicas
    int l_a = 1; //verdadeiro
    int l_b = 0; //falso

    printf("a && b = %d\n", l_a && l_b);
    printf("a || b = %d\n", l_a || l_b);
    printf("!a = %d\n", !l_a);

    // Expressões relacionais
    int r_a = 10;
    int r_b = 20;

    printf("a == b = %d\n", r_a == r_b);
    printf("a != b = %d\n", r_a != r_b);
    printf("a > b = %d\n", r_a > r_b);
    printf("a < b = %d\n", r_a < r_b);

    return 0;
}