#include <stdio.h>

long long calls_memo[40];
long long fib_memo[40];

void precompute() {
    calls_memo[0] = 0;
    fib_memo[0] = 0;
    calls_memo[1] = 0;
    fib_memo[1] = 1;
    
    for (int i = 2; i <= 39; i++) {
        fib_memo[i] = fib_memo[i - 1] + fib_memo[i - 2];
        // O número de chamadas para fib(i) é:
        // calls(i) = calls(i-1) + calls(i-2) + 2
        // porque chamamos fib(i-1) e fib(i-2), e cada uma dessas são chamadas diretas.
        calls_memo[i] = calls_memo[i - 1] + calls_memo[i - 2] + 2;
    }
}

int main() {
    precompute();
    int n, x;
    if (scanf("%d", &n) != 1) return 0;
    while (n--) {
        if (scanf("%d", &x) != 1) break;
        printf("fib(%d) = %lld calls = %lld\n", x, calls_memo[x], fib_memo[x]);
    }
    return 0;
}
