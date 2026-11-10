#include <stdio.h>

int line()
{
    static int c = 0;
    printf("------");
    c++;
    return c;
}

int main()
{
    line();line();line();line();
    printf("Hello World");
    int r = line();
    int p = printf("\n%d", r);
    return 0;
}