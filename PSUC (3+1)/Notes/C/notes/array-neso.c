#include <stdio.h>
#define N 9

// int main(void)
// {
//     int arr[N] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
//     for (int i = 0; i < N; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
//     for (int i = N - 1; i >= 0; i--)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

int main(void)
{
    int seen[10] = {0}, n, d;
    printf("Input: ");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        d = n % 10;
        if (seen[d] == d)
        {
            printf("Output: Yes");
            break;
        }
        else
        {
            seen[d] = d;
            n = n / 10;
        }
    }
}