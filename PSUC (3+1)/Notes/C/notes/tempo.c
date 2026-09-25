#include <stdio.h>

int main(void)
{

    int n, k, i, j;
    printf("Enter number of tables and number of terms: ");
    scanf("%d%d", &n, &k);

    for (i = 1; i <= n; i++)
    {
        printf("Table of %d\n", i);
        for (j = 1; j <= k; j++)
            printf("%d x %d = %d\n", i, j, i * j);
        printf("\n");
    }
    
    return 0;
}