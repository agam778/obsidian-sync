#include <stdio.h>

int main(void)
{
    int sum = 0, arr[] = {3, 4, 12, 24, 64, 22, 23, 29};

    // for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    //     if (i % 2 != 0)
    //         sum += arr[i];

    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i += 2)
        sum += arr[i];

    printf("Sum of odd index numbers: %d", sum);
}