#include <stdio.h>
#include <math.h>

int main(void)
{
    float a = 1, b = 1, c = -5;
    float d = b * b - 4 * a * c;

    if (d == 0)
        printf("Roots are: %.2f, %.2f", -b / 2 * a);

    else if (d > 0)
        printf("Roots are: %.2f, %.2f", -b + sqrt(d / 2 * a), -b - sqrt(d / 2 * a));

    else
        printf("There are no real roots.");
}