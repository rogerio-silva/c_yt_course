//
// Created by rogerio on 21/02/2026.
//
#include <stdio.h>

static void fib_fast_doubling(unsigned long long n, long long mod, long long *fn, long long *fn1) {
    if (n == 0ULL) {
        *fn = 0;
        *fn1 = 1 % mod;
        return;
    }

    long long a, b;
    fib_fast_doubling(n >> 1, mod, &a, &b);

    long long two_b_minus_a = (2 * b - a) % mod;
    if (two_b_minus_a < 0) {
        two_b_minus_a += mod;
    }

    long long c = (a * two_b_minus_a) % mod;                // F(2k)
    long long d = (a * a + b * b) % mod;                    // F(2k + 1)

    if ((n & 1ULL) == 0ULL) {
        *fn = c;
        *fn1 = d;
    } else {
        *fn = d;
        *fn1 = (c + d) % mod;
    }
}

int main(void) {
    unsigned long long n;
    long long b;
    int case_number = 1;

    while (scanf("%llu %lld", &n, &b) == 2) {
        if (n == 0ULL && b == 0) {
            break;
        }

        long long fn_plus_1, fn_plus_2;
        fib_fast_doubling(n + 1ULL, b, &fn_plus_1, &fn_plus_2);

        long long last_digit = (2 * fn_plus_1 - 1) % b;
        if (last_digit < 0) {
            last_digit += b;
        }

        printf("Case %d: %llu %lld %lld\n", case_number, n, b, last_digit);
        case_number++;
    }

    return 0;
}