// Inclusão da biblioteca padrão de entrada e saída
#include <stdio.h>
int main() {
    // Declaração das variáveis: bolas armazena cada valor lido, soma acumula o total
    int bolas, soma = 0;
    // Loop que lê 9 valores (um para cada rena)
    for (int i = 0; i < 9; i++) {
        // Lê um número inteiro e verifica se a leitura foi bem-sucedida
        if (scanf("%d", &bolas) != 1) break;
        // Adiciona o valor lido à soma total
        soma += bolas;
    }
    // Como são 9 renas, usamos (soma - 1) % 9 para obter o índice (0-8)
    // O índice determina qual rena foi escolhida de forma circular
    int indice = (soma - 1) % 9;
    // Estrutura switch-case para imprimir o nome da rena correspondente ao índice
    switch (indice) {
        case 0: printf("Dasher\n");
            break; // Índice 0: primeira rena
        case 1: printf("Dancer\n");
            break; // Índice 1: segunda rena
        case 2: printf("Prancer\n");
            break; // Índice 2: terceira rena
        case 3: printf("Vixen\n");
            break; // Índice 3: quarta rena
        case 4: printf("Comet\n");
            break; // Índice 4: quinta rena
        case 5: printf("Cupid\n");
            break; // Índice 5: sexta rena
        case 6: printf("Donner\n");
            break; // Índice 6: sétima rena
        case 7: printf("Blitzen\n");
            break; // Índice 7: oitava rena
        case 8: printf("Rudolph\n");
            break; // Índice 8: nona rena
    }
    // Retorna 0 indicando que o programa terminou com sucesso
    return 0;
}
