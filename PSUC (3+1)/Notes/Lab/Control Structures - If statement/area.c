#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, s, area;

    printf("Enter three sides: ");
    scanf("%f%f%f", &a, &b, &c);

    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area of triangle: %.2f", area);
    }
    else
    {
        printf("These sides do not form a triangle.");
    }

    return 0;
}