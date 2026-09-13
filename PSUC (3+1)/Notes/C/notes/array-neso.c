#include <stdio.h>
#define N 9

int main(void)
{
    int arr[N] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
    for (int i = 1; i <= N; i++)
        printf("%d ", arr[N - i]);
    printf("\n");
    for (int i = N; i > 0; i--)
        printf("%d ", arr[i - 1]);
    printf("\n");
}