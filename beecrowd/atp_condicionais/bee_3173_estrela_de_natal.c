#include <stdio.h>
#include <stdint.h>

static int is_leap(int year) {
    if (year % 400 == 0) return 1;
    if (year % 100 == 0) return 0;
    return (year % 4 == 0);
}

static int month_length(int year, int month) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return is_leap(year) ? 29 : 28;
        default:
            return 30; // should not happen
    }
}

static void add_days(int *y, int *m, int *d, int64_t add) {
    int year = *y, month = *m, day = *d;
    while (add > 0) {
        int ml = month_length(year, month);
        if (day < ml) {
            int64_t can_add = ml - day; // days to reach end of month
            if (add <= can_add) {
                day += (int)add;
                add = 0;
            } else {
                add -= can_add;
                day = ml;
            }
        }
        if (add == 0) break;
        // move to next day (which will be the 1st of next month)
        day++;
        if (day > ml) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }
    *y = year; *m = month; *d = day;
}

static int64_t days_for_revolutions(int N, int planet_code) {
    // planet_code: 0 = Jupiter (11.9 AT), 1 = Saturn (29.6 AT)
    // Using exact integer arithmetic with 365.25 = 36525/100 and 11.9=119/10, 29.6=296/10
    // days = floor(N * period_years * 365.25)
    int64_t factor = (planet_code == 0) ? 4346475LL : 10811400LL; // 119*36525=4346475; 296*36525=10811400
    // divide by 1000 to account for denominators (10 * 100)
    return (N * factor) / 1000LL;
}

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    // Start date: 2020-12-21
    int yJ = 2020, mJ = 12, dJ = 21;
    int yS = 2020, mS = 12, dS = 21;

    int64_t daysJ = days_for_revolutions(N, 0);
    int64_t daysS = days_for_revolutions(N, 1);

    add_days(&yJ, &mJ, &dJ, daysJ);
    add_days(&yS, &mS, &dS, daysS);

    printf("Dias terrestres para Jupiter = %lld\n", (long long)daysJ);
    printf("Data terrestre para Jupiter: %04d-%02d-%02d\n", yJ, mJ, dJ);
    printf("Dias terrestres para Saturno = %lld\n", (long long)daysS);
    printf("Data terrestre para Saturno: %04d-%02d-%02d\n", yS, mS, dS);

    return 0;
}
