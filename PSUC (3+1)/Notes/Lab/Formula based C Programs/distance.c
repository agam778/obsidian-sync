#include <stdio.h>

int main(void)
{
    float d, cm, inch, feet;

    printf("Enter distance (in mm): ");
    scanf("%f", &d);

    cm = d / 10.0;
    inch = cm / 2.5;
    feet = inch / 12.0;

    printf("cm: %.2f, inch: %.2f, feet: %.2f\n", cm, inch, feet);
    return 0;
}