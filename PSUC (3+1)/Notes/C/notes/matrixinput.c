#include <stdio.h>

int main()
{
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int m[r][c];
    for (int i = 0; i < r; i++)
    {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}