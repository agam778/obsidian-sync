#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, a, sum = 0;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        sum = sum + pow(a, i);
    }
    printf("Sum: %d\n", sum);
}