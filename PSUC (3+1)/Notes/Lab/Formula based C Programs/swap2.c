#include <stdio.h>

int main(void)
{
    int a = 5, b = 7;
    a = a + b; // 5+7 = 12
    b = a - b; // 12-7 = 5
    a = a - b; // 12-5 = 7
    printf("%d, %d", a, b);
    return 0;
}