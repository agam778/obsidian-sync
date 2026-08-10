#include <stdio.h>
#define PI 3.14

int main(void)
{
    float r, area;

    printf("Enter radius: ");
    scanf("%f", &r);

    area = PI * r * r;

    printf("Area: %.2f", area);
    return 0;
}