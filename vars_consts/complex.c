/**
    Exemplo básico de programa em linguagem C
    Autor: Prof. Rogério Sousa e Silva
    Curso: Programação em Linguagem C/C++
*/


#include <stdio.h>      /* Biblioteca padrão para entrada e saída */
#include <complex.h>    /* Biblioteca padrão para números complexos */

int main() {

    double complex z1 = 1.0 + 3.0 * I;
    double complex z2 = 1.0 - 4.0 * I;

    printf("Números complexos:\n");

    printf("Inicializando valores: Z1 = %.2f + %.2fi\tZ2 = %.2f %+.2fi\n", creal(z1), cimag(z1), creal(z2), cimag(z2));

    double complex soma = z1 + z2;
    printf("A Soma: Z1 + Z2 = %.2f %+.2fi\n", creal(soma), cimag(soma));

    double complex diferenca = z1 - z2;
    printf("A diferença: Z1 - Z2 = %.2f %+.2fi\n", creal(diferenca), cimag(diferenca));

    double complex produto = z1 * z2;
    printf("O produto: Z1 x Z2 = %.2f %+.2fi\n", creal(produto), cimag(produto));

    double complex quociente = z1 / z2;
    printf("O quociente da divisão: Z1 / Z2 = %.2f %+.2fi\n", creal(quociente), cimag(quociente));

    double complex conjugado = conj(z1);
    printf("O conjugado de Z1 = %.2f %+.2fi\n", creal(conjugado), cimag(conjugado));

    // Declaração de números complexos
    float _Complex z4 = 1.0 + 3.0 * I;
    double _Complex z5 = 1.0 + 3.0 * I;
    long double _Complex z6 = 1.0 + 3.0 * I;

    // Impressão dos números complexos
    printf("\nZ1 = %.2f %+.2fi\n", creal(z4), cimag(z4));
    printf("Z2 = %.2f %+.2fi\n", creal(z5), cimag(z5));
    printf("Z3 = %.2f %+.2fi\n", creal(z6), cimag(z6));

    // Tamanho dos números complexos
    printf("Tamanho de Z1 = %lu bytes\n", sizeof(z1));
    printf("Tamanho de Z2 = %lu bytes\n", sizeof(z2));
    printf("Tamanho de Z3 = %lu bytes\n", sizeof(z6));

    return 0;
}