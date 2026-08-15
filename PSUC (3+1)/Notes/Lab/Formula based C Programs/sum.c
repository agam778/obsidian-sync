// #include <stdio.h>

// int main(void)
// {
//     int n1, n2, n3, n4, sum;
//     printf("Enter a 4-digit number: ");
//     scanf("%1d%1d%1d%1d", &n1, &n2, &n3, &n4);
//     sum = n1 + n2 + n3 + n4;
//     printf("Sum: %d", sum);
// }

#include <stdio.h>

int main(void)
{
    int n = 3279, sum = 0;

    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    sum += n % 10;

    printf("Sum of digits = %d\n", sum);

    return 0;
}