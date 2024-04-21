/**
    Exemplo básico de programa em linguagem C
    Autor: Prof. Rogério Sousa e Silva
    Curso: Programação em Linguagem C/C++
*/

// Cláusulas de inclusão de bibliotecas
#include <stdio.h>

// Cláusulas para definição de constantes
#define PI 3.14159

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