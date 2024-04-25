/**
    Exemplo básico de programa em linguagem C
    Autor: Prof. Rogério Sousa e Silva
    Curso: Programação em Linguagem C/C++
*/
/**
 * Faça um programa, utilizando for e while, que peça ao usuário um número
 * e mostre a sua tabuada.
*/

#include <stdio.h>

int main(void) {
    int num, i;
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num < 1 || num > 10) {
        printf("Número inválido\n");
    } else {
        printf("Tabuada do %d\n", num);
        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }
    }
    return 0;
}