/**
    Exemplo básico de programa em linguagem C
    Autor: Prof. Rogério Sousa e Silva
    Curso: Programação em Linguagem C/C++
 * @file repeticao_do.c
 * @brief Exemplo de comando de repetição (do-while) em C
 */
/**
Faça um programa que simule a urna eletrônica.
A tela a ser apresentada deverá ser da seguinte forma:
As opcoes sao:
    1. Candidato Macaco Tião
    2. Candidato Rinoceronte Cacareco
    3. Candidato Bode Ioiô
    4. Nulo
    5. Branco
Entre com o seu voto:
    O programa deverá ler os votos dos eleitores e,
    quando for entrado o número 6, apresentar as seguintes
    informações:
    a) O número de votos de cada candidato;
    b) A porcentagem de votos nulos;
    c) A porcentagem de votos brancos;
    d) O candidato vencedor.
*/

#include <stdio.h>

int main(void) {
    // Declaração de variáveis
    int voto;
    int votos_macaco_tiao = 0;
    int votos_rinoceronte_cacareco = 0;
    int votos_bode_ioio = 0;
    int votos_nulo = 0;
    int votos_branco = 0;
    float total_votos = 0;
    // Lógica de votação
    do {
        // Apresentação das opções
        printf("As opcoes sao:\n");
        printf("1. Candidato Macaco Tião\n");
        printf("2. Candidato Rinoceronte Cacareco\n");
        printf("3. Candidato Bode Ioiô\n");
        printf("4. Nulo\n");
        printf("5. Branco\n");
        printf("6. Sair\n");
        printf("Entre com o seu voto: ");
        scanf("%d", &voto);
        // Contabilização dos votos
        switch (voto) {
            case 1:
                votos_macaco_tiao++;
                break;
            case 2:
                votos_rinoceronte_cacareco++;
                break;
            case 3:
                votos_bode_ioio++;
                break;
            case 4:
                votos_nulo++;
                break;
            case 5:
                votos_branco++;
                break;
            default:
                break;
        }
        total_votos++;
    } while (voto != 6);
    // Apresentação dos resultados
    printf("O número de votos de cada candidato:\n");
    printf("Candidato Macaco Tião: %d votos\n", votos_macaco_tiao);
    printf("Candidato Rinoceronte Cacareco: %d votos\n", votos_rinoceronte_cacareco);
    printf("Candidato Bode Ioiô: %d votos\n", votos_bode_ioio);
    printf("A porcentagem de votos nulos: %.2f%%\n", ((float) votos_nulo / total_votos) * 100);
    printf("A porcentagem de votos brancos: %.2f%%\n", (votos_branco / (float) total_votos) * 100);
    // Verificação do candidato vencedor
    if (votos_macaco_tiao > votos_rinoceronte_cacareco && votos_macaco_tiao > votos_bode_ioio) {
        printf("O candidato vencedor é o Macaco Tião\n");
    } else if (votos_rinoceronte_cacareco > votos_bode_ioio) {
        printf("O candidato vencedor é o Rinoceronte Cacareco\n");
    } else {
        printf("O candidato vencedor é o Bode Ioiô\n");
    }
}