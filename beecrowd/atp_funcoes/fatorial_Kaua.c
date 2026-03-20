//
// Created by rogerio on 20/03/2026.
//

#include <stdio.h>

void fatorial(int *x);

int main() {
    int v;
    scanf("%d", &v);
    fatorial(&v);
    printf("%d\n", v);
    return 0;
}
void fatorial(int *x){
    int fat = 1;
    /* Primeiro compreenda que no seu código:
     *    Dadas as declarações int v; e int *x, a chamada fatorial(&v), e o header void fatorial(int *x), temos que:
     *    --> x é o endereço para o qual x aponta, ou seja, o endereço da variável v, usada no argumento
     *    --> *x é o valor da variável que x aponta, ou seja, o valor de v, usado no argumento
     *    --> &v é o endereço de v
     *    --> v representa o valor de v.
     *
     * No caso abaixo, há um problema relacionado ao decremento no comando for:
     * quando você escreve *x--, a prioridade é do --, ou seja, ele realiza
     * x-- antes de considerar o *x (x-- significa que quero decrementar o
     * endereço de memória para o qual x aponta, Ex:[ender x--][ender x][ender x++]
     * porém a sua demanda é decrementar o valor para o qual o ponteiro x aponta,
     * logo você deveria informar isso explicitamente no código, ou seja, informar
     * que o decremento é do valor de x ao invés do endereço de x. Assim você
     * deveria ter escrito (*x)--, que significa que o decremento deve ser realizado
     * em *x e não em x.
     *
     * Assim, para corrigir o problema, basta marcar no código que o decremento deve
     * ser realizado no valor de x e não no endereço de x, ou seja,
     * basta escrever (*x)-- no lugar de *x--.
     * for (int i = 1; i < *x; AQUI->(*x)--) {
     */
    for (int i = 1; i < *x; (*x)--) {
        fat = fat * *x;
    }
    *x = fat;
}