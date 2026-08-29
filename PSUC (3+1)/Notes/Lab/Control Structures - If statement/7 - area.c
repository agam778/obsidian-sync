#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, s, area;

    printf("Enter three sides: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Sides must be positive.\n");
        return 0;
    }

    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area of triangle: %.2f\n", area);
    }
    else
    {
        printf("These sides do not form a triangle.\n");
    }

    return 0;
}