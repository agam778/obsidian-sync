#include <stdio.h>
#include <math.h>

int main(void)
{
    float a = 1, b = 1, c = -5;
    float d = b * b - 4 * a * c;

    if (d == 0)
    {
        float x = -b / (2 * a);
        printf("Root is: %.2f\n", x);
    }
    else if (d > 0)
    {
        float x1 = (-b + sqrt(d)) / (2 * a);
        float x2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are: %.2f, %.2f\n", x1, x2);
    }
    else
    {
        printf("There are no real roots.\n");
    }

    return 0;
}