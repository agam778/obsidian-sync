#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("'a' cannot be 0 in a quadratic equation.\n");
        return 1;
    }

    float d = b * b - 4 * a * c;

    if (d == 0)
        printf("Root is: %.2f\n", -b / (2 * a));
    else if (d > 0)
        printf("Roots are: %.2f, %.2f\n", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
    else
        printf("There are no real roots.\n");

    return 0;
}