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
        sum = sum + d * d * d;
        n = n / 10;
    }

    if (sum == n1)
        printf("%d is an armstrong number", );
    else 
        printf("%d is not an armstrong number");
}