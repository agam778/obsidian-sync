#include <stdio.h>
#define N 2

int main(void)
{
    int n;
    // for (int i = 0; i < N; i++)
    // {
    //     printf("Enter number %d: ", i + 1);
    //     scanf("%d", &n);
    //     arr[i] = n;
    // }
    // printf("\n");
    int arr[] = {1, 2, [3]=67}
    for (int i = 0; i < arr.len; i++)
    {
        printf("Number %d: %d\n", i + 1, arr[i]);
    }
}