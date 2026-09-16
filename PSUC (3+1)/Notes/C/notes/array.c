#include <stdio.h>

int main(void)
{
    int a[5] = {2, 1, 13, 23, 12};
    int sum = 0;

    for (int i = 0; i < 5; i++)
        sum = sum + a[i];

    printf("Sum: %d\n", sum);
    printf("Average: %d\n", sum / 5);

    return 0;
}