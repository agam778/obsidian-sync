#include <stdio.h>
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
    int a = 8;
    int b = 5;
    printf("%d\n", SQUARE(a));
    printf("%d\n", MAX(a, b));
    return 0;
}