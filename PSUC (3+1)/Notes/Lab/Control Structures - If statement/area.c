#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter three sides: ");
    scanf("%d%d%d", &a, &b, &c);
    if ((a+b>c) && (b+c>a) && (a+c>b))
}