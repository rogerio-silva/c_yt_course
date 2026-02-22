#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Converte uma string para lowercase
void to_lower(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

// Inverte uma string
void reverse_str(char *str, char *rev) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';
}

int main() {
    int N, M;
    if (scanf("%d %d", &N, &M) != 2) return 0;

    char frutas[105][105];
    char frutas_rev[105][105];
    for (int i = 0; i < N; i++) {
        scanf("%s", frutas[i]);
        to_lower(frutas[i]);
        reverse_str(frutas[i], frutas_rev[i]);
    }

    char lista[505][105];
    for (int i = 0; i < M; i++) {
        scanf("%s", lista[i]);
        to_lower(lista[i]);
    }

    for (int i = 0; i < N; i++) {
        bool encontrou = false;
        for (int j = 0; j < M; j++) {
            if (strstr(lista[j], frutas[i]) != NULL || strstr(lista[j], frutas_rev[i]) != NULL) {
                encontrou = true;
                break;
            }
        }

        if (encontrou) {
            printf("Sheldon come a fruta %s\n", frutas[i]);
        } else {
            printf("Sheldon detesta a fruta %s\n", frutas[i]);
        }
    }

    return 0;
}
