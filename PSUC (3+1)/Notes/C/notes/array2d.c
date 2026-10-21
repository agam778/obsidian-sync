#include <stdio.h>

int main()
{
    int a[3][5] = {{5, 6, 7, 7, 9}, {4, 5, 3, 2, 1}, {3, 3, 4, 2, 1}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}