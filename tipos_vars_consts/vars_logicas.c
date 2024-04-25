/**
    Exemplo básico de programa em linguagem C
    Autor: Prof. Rogério Sousa e Silva
    Curso: Programação em Linguagem C/C++
*/

#include <stdio.h>

int main(){
    /* Variáveis LÓGICAS em C*/
    int opcao1 = 10;
    int opcao2 = 0;
    int opcao3 = -10;
    if (opcao1) {
        printf("Valor de opção 1 é Verdadeiro\n");
    } else {
        printf("Valor de opção 1 é Falso\n");
    }
    if (opcao2) {
        printf("Valor de opção 2 é Verdadeiro\n");
    } else {
        printf("Valor de opção 2 é Falso\n");
    }
    if (opcao3) {
        printf("Valor de opção 3 é Verdadeiro\n");
    } else {
        printf("Valor de opção 3 é Falso\n");
    }
    return 0;
}