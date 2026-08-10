#include <stdio.h>

int main(void)
{
    int a = 5, b = 7, c;
    c = a;
    a = b;
    b = c;
    printf("%d, %d", a, b);
    return 0;
}