/**
 *  Exemplo básico de programa em linguagem C
 *  Autor: Prof. Rogério Silva
 *  Curso: Programação em Linguagem C/C++
 *
 * @file exercicio_1.c
 * @brief Exercício 1: Comando de seleção (if-else) em C
 */

/** Excreva um algoritmo que:
 * Elabore um algoritmo que leia dois valores do usuário
 * e a operação que ele deseja executar
 * (Operações: soma, subtração, divisão, multiplicação).
 * Execute a operação desejada e imprima o resultado na tela.
 *
 * Obs: Resolva o exercício utilizando o comando switch-case.
 */

#include <stdio.h>

int main() {
    // Declaração de variáveis
    float a, b, resultado;
    char operacao;
    // Entrada de dados
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);
    printf("Digite a operação desejada (+, -, *, /): ");
    scanf(" %c", &operacao);
    // Lógica de verificação
    switch (operacao) {
        case '+':
            resultado = a + b;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case '-':
            resultado = a - b;
            printf("Resultado da subtração: %.2f\n", resultado);
            break;
        case '*':
            resultado = a * b;
            printf("Resultado da multiplicação: %.2f\n", resultado);
            break;
        case '/':
            if (b == 0) {
                printf("Divisão por zero!\n");
            } else {
                resultado = a / b;
                printf("Resultado da divisão: %.2f\n", resultado);
            }
            break;
        default:
            printf("Operação inválida!\n");
            break;
    }
    return 0;
}

