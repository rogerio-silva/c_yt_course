//
// Created by rogerio on 22/02/2026.
//
#include <stdio.h>

int main() {
    float R;
    const float PI = 3.14f;
    if (scanf("%f", &R) == 1) {
        float circunferencia = 2.0f * PI * R;
        printf("%.2f\n", circunferencia);
    }
    return 0;
}
