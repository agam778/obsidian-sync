#include <stdio.h>

int main()
{
    int n = 5, g = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%4d", i);
        }
        printf("\n");
    }
}