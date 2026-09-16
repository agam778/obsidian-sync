#include <stdio.h>

int main(void)
{
    int arr[5] = {489, 3, 243, 32, 42};
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] == 3)
        {
            printf("3 exists at index %d", i);
            break;
        }
        printf("3 does not exist in the array");
    }
}