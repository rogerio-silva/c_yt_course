//
// Created by rogerio on 21/02/2026.
//

#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar dados de entrada e controle
    int n_pessoas, a_min, a_max, p_max, altura;
    int quantidade_pessoas, peso, peso_acumulado;

    // Loop principal: lê múltiplos casos de teste até o fim do arquivo (EOF)
    while (scanf("%i %i %i %i", &n_pessoas, &a_min, &a_max, &p_max) != EOF) {
        // Inicializa os contadores para cada novo caso de teste
        quantidade_pessoas = 0;
        peso_acumulado = 0;;

        // Percorre todas as n_pessoas da fila
        for (int i = 0; i < n_pessoas; i++) {
            // Lê a altura e o peso de cada pessoa
            scanf("%i %i", &altura, &peso);

            // Verifica se a altura da pessoa está dentro dos limites permitidos
            if (altura <= a_max && altura >= a_min)
                // Verifica se o peso acumulado ainda não ultrapassou o limite máximo
                if (peso_acumulado < p_max) {
                    // Adiciona o peso da pessoa ao peso acumulado
                    peso_acumulado += peso;
                    // Incrementa o contador de pessoas que podem entrar
                    quantidade_pessoas++;
                } else break; // Se o peso máximo for ultrapassado, interrompe o loop
        }
        // Exibe a quantidade de pessoas que puderam entrar na montanha-russa
        printf("%i\n", quantidade_pessoas);
    }
    return 0;
}
