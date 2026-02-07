#include <stdio.h>
#include <string.h>

void post_order(char *prefix, char *infix, int n) {
    if (n <= 0) return;

    // A raiz é o primeiro elemento do percurso prefixo
    char root = prefix[0];

    // Encontrar a posição da raiz no percurso infixo
    int root_pos = 0;
    while (root_pos < n && infix[root_pos] != root) {
        root_pos++;
    }

    // Subárvore esquerda:
    // No infixo, vai de 0 até root_pos - 1 (tamanho root_pos)
    // No prefixo, vai de 1 até root_pos
    post_order(prefix + 1, infix, root_pos);

    // Subárvore direita:
    // No infixo, vai de root_pos + 1 até n - 1 (tamanho n - root_pos - 1)
    // No prefixo, vai de root_pos + 1 até n - 1
    post_order(prefix + root_pos + 1, infix + root_pos + 1, n - root_pos - 1);

    // Imprime a raiz por último (Post-order: Left, Right, Root)
    printf("%c", root);
}

int main() {
    int c;
    if (scanf("%d", &c) != 1) return 0;
    
    while (c--) {
        int n;
        char prefix[60], infix[60];
        if (scanf("%d %s %s", &n, prefix, infix) == 3) {
            post_order(prefix, infix, n);
            printf("\n");
        }
    }
    return 0;
}
