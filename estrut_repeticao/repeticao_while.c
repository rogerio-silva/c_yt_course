/**
    Exemplo básico de programa em linguagem C
    Autor: Prof. Rogério Sousa e Silva
    Curso: Programação em Linguagem C/C++
*/
/**
 * Verificador de Números Primos
 * Escreva um código que recebe um número e imprime uma mensagem
 * dizendo se ele é ou não é um número primo.
 *
 * Nota: Um número primo é um número que só é divisível
 * (divisão exata / sem resto) por 1 e ele mesmo.
*/

#include <stdio.h>

int main(void) {
    int num, i = 1, cont = 0;
    printf("Digite um número: ");
    scanf("%d", &num);
    while (i <= num) {
        if (num % i == 0) {
            cont++;
            printf("%d é divisível por %d\n", num, i);

        }
        i++;
    }
    if (cont == 2) {
        printf("O número %d é primo\n", num);
    } else {
        printf("O número %d não é primo\n", num);
    }
    return 0;
}