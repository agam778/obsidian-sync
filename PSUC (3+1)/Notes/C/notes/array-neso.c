#include <stdio.h>
#define N 2

int main(void)
{
    int arr[N], n;
    for (int i = 0; i < 2; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &n);
        arr[i] = n;
    }
}