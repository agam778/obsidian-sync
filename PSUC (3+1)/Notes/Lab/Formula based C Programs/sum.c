#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, sum;
    printf("Enter a 4 digit number: ");
    scanf("%1d%1d%1d%1d", &n1, &n2, &n3, &n4);
    sum = n1 + n2 + n3 + n4;
    printf("Sum: %d\n", sum);
}