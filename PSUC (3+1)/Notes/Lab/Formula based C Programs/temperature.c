#include <stdio.h>

int main(void)
{
    float temp, C = 0, F = 0;

    // Fahrenheit to Centigrade
    printf("Enter temperature (in F): ");
    scanf("%f", &temp);
    C = (temp - 32.0) * (5.0 / 9.0f);
    printf("Temperature in C: %.2f\n\n", C);

    // Centigrade to Fahrenheit
    printf("Enter temperature (in C): ");
    scanf("%f", &temp);
    F = (temp * (9.0 / 5.0)) + 32;
    printf("Temperature in F: %.2f\n", F);

    return 0;
}