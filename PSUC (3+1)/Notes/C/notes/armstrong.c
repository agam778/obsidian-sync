// Armstrong for 3 variables
#include <stdio.h>

int main(void)
{
    int n, n1, sum, d;
    printf("Enter a number: ");
    scanf("%d", &n);
    n1 = n;
    for (int i = 0; i < 3; i++)
    {
        d = n % 10;
        printf("%d\n", d);
        sum = sum + (d * d * d);
        printf("%d\n", sum);
        n = n / 10;
        printf("%d\n", n);
    }

    if (sum == n1)
        printf("%d is an armstrong number\n", n1);
    else
        printf("%d is not an armstrong number\n", n1);
}