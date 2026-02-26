#include <stdio.h>

int main() {
    int ca, ba, pa;
    int cr, br, pr;
    int total = 0;

    if (scanf("%d %d %d", &ca, &ba, &pa) != 3) return 0;
    if (scanf("%d %d %d", &cr, &br, &pr) != 3) return 0;

    if (cr > ca) total += (cr - ca);
    if (br > ba) total += (br - ba);
    if (pr > pa) total += (pr - pa);

    printf("%d\n", total);

    return 0;
}
