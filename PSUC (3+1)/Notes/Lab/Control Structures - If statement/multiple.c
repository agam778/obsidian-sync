#include <stdio.h>

int main(void)
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);

    if (n1 % n2 == 0)
        printf("%d is a multiple of %d", n1, n2);

    else if (n2 % n1 == 0)
        printf("%d is a multiple of %d", n2, n1);
    else
}