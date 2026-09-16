// input 10 numbers, search if element in key or not

#include <stdio.h>

int main(void)
{
    int v, n, arr[] = {489, 3, 243, 32, 42};
    printf("Enter value: ");
    scanf("%d", v);
    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] == v)
        {
            printf("Enter new value: ");
            scanf("%d", n);
        }
        printf("3 does not exist in the array");
    }
}