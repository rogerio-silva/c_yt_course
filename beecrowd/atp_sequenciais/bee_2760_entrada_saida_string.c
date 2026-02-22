#include <stdio.h>

int main() {
    char a[101], b[101], c[101];

    while (scanf("%[^\n]\n", a) != EOF) {
        scanf("%[^\n]\n", b);
        scanf("%[^\n]\n", c);

        printf("%s%s%s\n", a, b, c);
        printf("%s%s%s\n", b, c, a);
        printf("%s%s%s\n", c, a, b);
        printf("%.10s%.10s%.10s\n", a, b, c);
    }

    return 0;
}
