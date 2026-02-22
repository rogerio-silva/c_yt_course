/**
 * Exemplo de uso de condicionais em linguagem C
 * #### Exercício do Beecrowd - 1045 ####
 * Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1045
 * Autor: Prof. Rogério Silva
 * Curso: Programação em Linguagem C/C++
 *
 * @file bee_1045_triangulos.c
 * @brief Exemplo de uso de condicionais em C - Solução BEECROWD 1045
*/

/**
 * beecrowd | 1960
 * Numeração Romana para Números de Página
 * Por M.C. Pinto, UNILA BR Brazil
 *
 * Timelimit: 1
 * A ECI (Editio Chronica Incredibilis ou Editora de Crônicas Incríveis) é muito tradicional
 * quando se trata de numerar as páginas de seus livros. Ela sempre usa a numeração romana
 * para isso. E seus livros nunca ultrapassam as 999 páginas pois, quando necessário, dividem
 * o livro em volumes.
 * Você deve escrever um programa que, dado um número arábico, mostra seu equivalente
 * na numeração romana.
 * Lembre que I representa 1, V é 5, X é 10, L é 50, C é 100, D é 500 e M representa 1000.
 * Entrada
 *    A entrada é um número inteiro positivo N (0 < N < 1000).
 * Saída
 *    A saída é o número N escrito na numeração romana em uma única linha. Use sempre letras maiúsculas.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
    unsigned int n;
    // declarar as strings para centena, dezena e unidade
    // e alocar memória para elas
    char *centena = (char *) malloc(5 * sizeof(char));
    char *dezena = (char *) malloc(5 * sizeof(char));
    char *unidade = (char *) malloc(5 * sizeof(char));

    // ler o número inteiro
    scanf("%u", &n);

    // converter a centena
    strcpy(centena,
           ((n / 100) == 9 ? "CM\0" : ((n / 100) == 8 ? "DCCC\0" :
               ((n / 100) == 7 ? "DCC\0" : ((n / 100) == 6 ? "DC\0" :
               ((n / 100) == 5 ? "D\0" : ((n / 100) == 4 ? "CD\0" :
               ((n / 100) == 3 ? "CCC\0" : ((n / 100) == 2 ? "CC\0" :
               ((n / 100) == 1 ? "C\0" : "\0"))))))))));
    // retirar o número equivalente a centena de n
    // Ex: 123 div 100 = 1 e resta -> 23
    n %= 100;
    strcpy(dezena,
           ((n / 10) == 9 ? "XC\0" : ((n / 10) == 8 ? "LXXX\0" :
               ((n / 10) == 7 ? "LXX\0" : ((n / 10) == 6 ? "LX\0" :
               ((n / 10) == 5 ? "L\0" : ((n / 10) == 4 ? "XL\0" :
               ((n / 10) == 3 ? "XXX\0": ((n / 10) == 2 ? "XX\0" :
               (n / 10) == 1 ? "X\0" : "\0")))))))));
    // retirar o número equivalente a dezena de n
    // Ex: 23 div 10 = 2 e resta -> 3
    n %= 10;
    strcpy(unidade,
           (n == 9 ? "IX\0" : (n == 8 ? "VIII\0" :
               (n == 7 ? "VII\0" : (n == 6 ? "VI\0" :
               (n == 5 ? "V\0" : (n == 4 ? "IV\0" :
               (n == 3 ? "III\0" : (n == 2 ? "II\0" :
               (n == 1 ? "I\0" : "\0"))))))))));
    printf("%s%s%s\n", centena, dezena, unidade);
    return 0;
}