#include <stdio.h>

// int main(void)
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//             printf("%d", i);
//         printf("\n");
//     }
// }

// int main(void)
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//             printf("%d", j);
//         printf("\n");
//     }
// }

// int main(void)
// {
//     int n = 5, k = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//             printf("%-4d", k++);
//         printf("\n");
//     }
// }

// int main(void)
// {
//     int n = 5;
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = i; j >= 1; j--)
//             printf("%d", j);
//         printf("\n");
//     }
// }

int main(void)
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 5; k >= n; k--)
            printf(" ");
        for (int j = 1; j <= n; j++)
            printf("%d", j);
        printf("\n");
    }
}