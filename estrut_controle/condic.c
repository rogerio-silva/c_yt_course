/**
    Exemplo de uso de condicionais em linguagem C
    Autor: Prof. Rogério Sousa e Silva
    Curso: Programação em Linguagem C/C++
*/

#include <stdio.h>
// Verifique que 3 numeros formam ou não um triângulo,
// caso forme, verifique se é um triângulo equilátero, isósceles ou escaleno
int main(void) {
    // Declaração de variáveis
    float a, b, c;
    // Entrada de dados
    printf("Digite o valor do lado a: ");
    scanf("%f", &a);
    printf("Digite o valor do lado b: ");
    scanf("%f", &b);
    printf("Digite o valor do lado c: ");
    scanf("%f", &c);
    // Lógica de verificação
    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            printf("Triângulo equilátero\n");
        } else if (a == b || a == c || b == c) {
            printf("Triângulo isósceles\n");
        } else {
            printf("Triângulo escaleno\n");
        }
    } else {
        printf("Não é um triângulo\n");
    }
}