#include <stdio.h>

int main(void)
{
    int seen[10] = {0};
    int n, d;

    printf("Input: ");
    scanf("%d", &n);

    while (n > 0)
    {
        d = n % 10;
        if (seen[d] == 1)
        {
            printf("Yes");
        }
    }
}