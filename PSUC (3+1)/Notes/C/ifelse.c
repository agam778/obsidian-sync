#include <stdio.h>

int main(void)
{
    int n1, n2, c;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("y or n: ");
    scanf("%c", &c);
    if (c == 'y')
    {
        printf("Sum: %d\n", n1 + n2);
    }
    else
    {
        return 0;
    }
}