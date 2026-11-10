#include <stdio.h>

int main()
{
    int a1[2][2] = {{1, 2}, {5, 9}};
    int a2[2][2] = {{9, 9}, {2, 6}};
    int s[2][2] = {0};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            s[i][j] = a1[i][j] + a2[i][j];
        }
    }

    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++) {
            printf("%4d", s[i][j]);
        }
        printf("\n");
    }
}