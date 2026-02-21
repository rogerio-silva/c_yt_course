//
// Created by rogerio on 21/02/2026.
//

#include <stdio.h>
int main() {
    // Declaração das variáveis para armazenar horários de dormir e acordar
    int h1, m1, h2, m2;
    // Loop principal: lê múltiplos casos de teste até encontrar 0 0 0 0
    // scanf retorna 4 quando consegue ler os 4 valores com sucesso
    while (scanf("%d %d %d %d", &h1, &m1, &h2, &m2) == 4 && (h1 != 0 || m1 != 0 || h2 != 0 || m2 != 0)) {
        // Converte o horário de dormir (h1:m1) para minutos totais desde 0:00
        int total_min1 = h1 * 60 + m1;
        // Converte o horário do alarme (h2:m2) para minutos totais desde 0:00
        int total_min2 = h2 * 60 + m2;
        // Calcula a diferença entre os dois horários em minutos
        int diff = total_min2 - total_min1;
        // Se a diferença for negativa ou zero, significa que o alarme toca no dia seguinte
        if (diff <= 0) {
            // Adiciona 24 horas (1440 minutos) para ajustar para o próximo dia
            diff += 24 * 60;
        }
        // Imprime o tempo em minutos até o alarme tocar
        printf("%d\n", diff);
    }
    return 0;
}
