/**
 *  Exemplo básico de programa em linguagem C
 *  Autor: Prof. Rogério Silva
 *  Curso: Programação em Linguagem C/C++
 *
 *  @file basico.c
 *  @brief Exemplo de programa básico em C
*/

// Cláusulas de inclusão de bibliotecas
#include <stdio.h>

// Cláusulas para definição de constantes
#define PI 3.141594

// Função principal
int main() {
    // Declaração de variáveis
    float raio, area;

    // Entrada de dados
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    // Processamento
    area = PI * raio * raio;

    // Saída de dados
    printf("A área do círculo é: %.2f\n", area);

    return 0;
}