/**
 *  Exemplo básico de programa em linguagem C
 *  Autor: Prof. Rogério Silva
 *  Curso: Programação em Linguagem C/C++
 *
 * @file selecao.c
 * @brief Exemplo de comando de seleção (switch) em C
 */

#include <stdio.h>

int main() {
    int opcao;
    printf("Digite uma opção (1, 2 ou 3): ");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            printf("Opção 1 selecionada\n");
            break;
        case 2:
            printf("Opção 2 selecionada\n");
            break;
        case 3:
            printf("Opção 3 selecionada\n");
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
    return 0;
}