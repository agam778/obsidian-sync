#include <stdio.h>

int main(void)
{
    float a, b, c, area;
    printf("Enter three sides: ");
    scanf("%f%f%f", &a, &b, &c);
    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        area = ((a + b + c) / 2);
        printf("Area of triangle: %.2f", area);
    }
}