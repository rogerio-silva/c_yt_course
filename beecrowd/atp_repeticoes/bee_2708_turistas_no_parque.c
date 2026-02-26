    #include <stdio.h>
    #include <string.h>

    int main() {
        char acao[10];
        int turistas, total_turistas = 0, total_jipes = 0;

        while (scanf("%s", acao) && strcmp(acao, "ABEND") != 0) {
            scanf("%d", &turistas);
            if (strcmp(acao, "SALIDA") == 0) {
                total_turistas += turistas;
                total_jipes++;
            } else if (strcmp(acao, "VUELTA") == 0) {
                total_turistas -= turistas;
                total_jipes--;
            }
        }

        printf("%d\n%d\n", total_turistas, total_jipes);

        return 0;
    }
