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
    int arr[] = {1, 2, 3, 4, [3] = 67, [7] = 89};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("Number %d: %d\n", i + 1, arr[i]);
    }
}