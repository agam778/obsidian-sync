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
            printf("Output: Yes");
            return 0;
        }
        seen[d] = 1;
        n = n / 10;
    }
    printf("Output: No");
}