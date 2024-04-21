/**
    Exemplo de variáveis, declarações e tipos de dados em linguagem C
    Autor: Prof. Rogério Sousa e Silva
    Curso: Programação em Linguagem C/C++
*/

#include <float.h>
#include "stdio.h"

int main(void) {
    /* VARIÁVEIS REAIS */
    float var_float;
    double var_double;
    long double var_long_double;

    printf("--------------------------------------------------\n");
    printf("Tamanho do float: %lu bytes\n", sizeof(var_float));
    printf("Valores possíveis do float: %e a %e\n", FLT_MIN, FLT_MAX);
    printf("--------------------------------------------------\n");
    printf("Tamanho do double: %lu bytes\n", sizeof(var_double));
    printf("Valores possíveis do double: %e a %e\n", DBL_MIN, DBL_MAX);
    printf("--------------------------------------------------\n");
    printf("Tamanho do long double: %lu bytes\n", sizeof(var_long_double));
    printf("Valores possíveis do long double: %Le a %Le\n", LDBL_MIN, LDBL_MAX);
    printf("--------------------------------------------------\n");
}
