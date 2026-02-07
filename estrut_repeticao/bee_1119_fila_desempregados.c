#include <stdio.h>
#include <stdbool.h>

int main() {
    int N, k, m;

    while (scanf("%d %d %d", &N, &k, &m) == 3 && (N != 0 || k != 0 || m != 0)) {
        int circle[25];
        for (int i = 1; i <= N; i++) {
            circle[i] = i;
        }

        int remaining = N;
        int p1 = 1;
        int p2 = N;
        bool first_event = true;

        while (remaining > 0) {
            int count1 = 0;
            while (count1 < k) {
                if (circle[p1] != 0) {
                    count1++;
                }
                if (count1 < k) {
                    do {
                        p1 = (p1 % N) + 1;
                    } while (circle[p1] == 0);
                }
            }

            int count2 = 0;
            while (count2 < m) {
                if (circle[p2] != 0) {
                    count2++;
                }
                if (count2 < m) {
                    do {
                        p2 = (p2 == 1) ? N : p2 - 1;
                    } while (circle[p2] == 0);
                }
            }

            if (!first_event) {
                printf(",");
            }
            first_event = false;

            if (p1 == p2) {
                printf("%3d", circle[p1]);
                circle[p1] = 0;
                remaining--;
            } else {
                printf("%3d%3d", circle[p1], circle[p2]);
                circle[p1] = 0;
                circle[p2] = 0;
                remaining -= 2;
            }

            if (remaining > 0) {
                while (circle[p1] == 0) {
                    p1 = (p1 % N) + 1;
                }
                while (circle[p2] == 0) {
                    p2 = (p2 == 1) ? N : p2 - 1;
                }
            }
        }
        printf("\n");
    }

    return 0;
}
