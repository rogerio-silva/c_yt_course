/**
    Exemplo de uso de condicionais em linguagem C
    ##### Exercício do Beecrowd - 1045 #####
    Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1045
    Autor: Prof. Rogério Sousa e Silva
    Curso: Programação em Linguagem C/C++
*/

#include <stdio.h>

int main() {
    double a, b, c, x;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a < b) {
        x = a;
        a = b;
        b = x;
    }
    if (b < c) {
        x = b;
        b = c;
        c = x;
    }
    if (a < b) {
        x = a;
        a = b;
        b = x;
    }
    if (a >= (b + c))
        printf("NAO FORMA TRIANGULO\n");
    else {
        if (a * a == b * b + c * c)
            printf("TRIANGULO RETANGULO\n");
        if (a * a > b * b + c * c) printf("TRIANGULO OBTUSANGULO\n");
        if (a * a < b * b + c * c) printf("TRIANGULO ACUTANGULO\n");
        if (a == b && b == c) printf("TRIANGULO EQUILATERO\n");
        if ((a == b && a != c) || (b == c && b != a) || (a == c && a != b)) printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}