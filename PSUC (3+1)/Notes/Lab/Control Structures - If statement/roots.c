#include <stdio.h>
#include <math.h>

int main(void)
{
    float a = 1, b = 1, c = -5;
    float d = b * b - 4 * a * c;

    if (d == 0)
        printf("Root is: %.2f\n", -b / (2 * a));
    else if (d > 0)
    {
        float x1 = (-b + sqrt(d)) / (2 * a);
        float x2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are: %.2f, %.2f\n", (-b + sqrt(d)) / (2 * a);
        float x2 = (-b - sqrt(d)) / (2 * a));
    }
    else
    {
        printf("There are no real roots.\n");
    }

    return 0;
}