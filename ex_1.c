//
// Created by rogerio on 20/05/2026.
//

#include <stdio.h>
int main() {
    float farenheit, celsius;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    farenheit = (9 * celsius + 160) / 5;
    printf("The temperature in Fahrenheit is: %.2f\n",farenheit);
    return 0;
}