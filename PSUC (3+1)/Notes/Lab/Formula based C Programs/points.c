#include <stdio.h>
#include <math.h>

int main(void)
{
    int x1 = 24, x2 = 43, y1 = 123, y2 = 79;
    float d;

    d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("%.2f\n", d);
    return 0;
}