#include <stdio.h>

int main(void)
{
    int arr[5] = {3, 45, 6, 34, 5};
    int target = 99;

    for (int i = 0; i < 5; i++)
        if (arr[i] == target)
        {
            printf("Key found at index: %d", i);
            return 0;
        }
    printf("Key not found");
    return 0;
}