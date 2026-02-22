//
// Created by rogerio on 21/02/2026.
//

#include <stdio.h>
int main() {
    // Declaração da variável para armazenar o número de parlamentares
    int n;
    // Loop principal: lê múltiplos casos de teste até o fim do arquivo (EOF)
    while (scanf("%d", &n) != EOF) {
        // Inicializa o contador de votos favoráveis ao impeachment
        int vf = 0;
        // Percorre todos os n parlamentares
        for (int i = 0; i < n; i++) {
            // Declaração da variável para armazenar o voto de cada parlamentar
            int vt;
            // Lê o voto (1 = favorável ao impeachment, 0 = contra)
            scanf("%d", &vt);
            // Se o voto for favorável (1), incrementa o contador
            if (vt == 1) {
                vf++;
            }
        }
        // Verifica se há votos suficientes para o impeachment
        // Condição: pelo menos 2/3 dos votos devem ser favoráveis
        // 3 * vf >= 2 * n é equivalente a vf >= (2/3) * n
        if (3 * vf >= 2 * n) {
            printf("impeachment\n");
        } else {
            printf("acusacao arquivada\n");
        }
    }
    return 0;
}
