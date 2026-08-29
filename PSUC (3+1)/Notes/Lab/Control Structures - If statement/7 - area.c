#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, area;

    printf("Enter three sides: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 
        && (a + b > c) && (b + c > a) && (a + c > b))
    {
        float s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area of triangle: %.2f\n", area);
    }
    else
        printf("Invalid triangle.\n");

    return 0;
}