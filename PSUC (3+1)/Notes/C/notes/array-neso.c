#include <stdio.h>
#define N 2

int main(void)
{
    int arr[N], n;
    for (int i = 0; i < N; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &n);
        arr[i] = n;
    }
    for (int i = 0; i < N; i++)
    {
        printf("Number %d: %d", i + 1, arr[i]);
    }
}