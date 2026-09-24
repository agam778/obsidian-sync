#include <stdio.h>

int main()
{
    int a = 10, b = 12, c = 14;
    if (a < b && a < c)
        printf("a is smallest");

    else if (b < a && b < c)
        printf("b is smallest");
    else
        printf("c is smallest");
    printf("b is abc");
}