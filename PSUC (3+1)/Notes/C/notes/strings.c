#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    int sum = 0;
    int i, j, k;

    printf("enter number of rows and columns of m1: ");
    scanf("%d%d", &r1, &c1);

    printf("enter number of rows and columns of m2: ");
    scanf("%d%d", &r2, &c2);

    int m1[r1][c1], m2[r2][c2], m3[r1][c2];

    printf("enter elements of m1: ");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("enter elements of m2: ");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                sum += m1[i][k] * m2[k][j];
            }
            m3[i][j] = sum;
            sum = 0;
        }
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }
}