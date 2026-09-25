#include <stdio.h>

int main()
{
    int n, d, result = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        d = n % 10;
        result = result * 10 + d;
        n = n / 10;
    }
    printf("%d", result);
}