/**
    Exemplo de variáveis, declarações e tipos de dados em linguagem C
    Autor: Prof. Rogério Sousa e Silva
    Curso: Programação em Linguagem C/C++
*/

#include <limits.h>
#include "stdio.h"

int main(void) {

    int var_int;
    float var_float;
    char var_char;
    unsigned char var_uchar;

    short int var_short_int;
    long int var_long_int;
    long long int var_long_long_int;

    unsigned int var_uint;
    unsigned short int var_ushort_int;
    unsigned long int var_ulong_int;
    unsigned long long int var_ulong_long_int;

    printf("--------------------------------------------------\n");
    printf("Tamanho do char: %lu byte\n", sizeof(var_char));
    printf("Valores possíveis do char: %d a %d\n", CHAR_MIN, CHAR_MAX);
    printf("Tamanho do unsigned char: %lu byte\n", sizeof(var_uchar));
    printf("Valores possíveis do unsigned char: %u a %u\n", 0, UCHAR_MAX);
    printf("--------------------------------------------------\n");
    printf("Tamanho do short int: %lu bytes\n", sizeof(var_short_int));
    printf("Valores possíveis do short int: %d a %d\n", SHRT_MIN, SHRT_MAX);
    printf("Tamanho do unsigned short int: %lu bytes\n", sizeof(var_ushort_int));
    printf("Valores possíveis do unsigned short int: %u a %u\n", 0, USHRT_MAX);
    printf("--------------------------------------------------\n");
    printf("Tamanho do int: %lu bytes\n", sizeof(var_int));
    printf("Valores possíveis do int: %d a %d\n", INT_MIN, INT_MAX);
    printf("Tamanho do unsigned int: %lu bytes\n", sizeof(var_uint));
    printf("Valores possíveis do int: %u a %u\n", 0, UINT_MAX);
    printf("--------------------------------------------------\n");
    printf("Tamanho do long int: %lu bytes\n", sizeof(var_long_int));
    printf("Valores possíveis do long int: %ld a %ld\n", LONG_MIN, LONG_MAX);
    printf("Tamanho do unsigned unsigned long  int: %lu bytes\n", sizeof(var_ulong_int));
    printf("Valores possíveis do unsigned long int: %u a %lu\n", 0, ULONG_MAX);
    printf("--------------------------------------------------\n");
    return 0;
}