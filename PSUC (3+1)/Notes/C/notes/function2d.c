#include <stdio.h>

int count(int a[][3], int key, int count)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (key == a[i][j])
                count++;
        }
    }
    return count;
}

int main()
{
    int c = 0;
    int a[3][3] = {{10, 34, 534}, {12, 45, 46}, {43, 32, 32}};
    printf("%d", count(a, 12, c));
}