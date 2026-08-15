#include <stdio.h>

int main(void)
{
    float mm = 269.32, cm, inch, feet;

    cm = mm / 10.0;
    inch = cm / 2.5;
    feet = inch / 12.0;

    printf("cm: %.2f\ninch: %.2f\nfeet: %.2f\n", cm, inch, feet);
    return 0;
}