#include <stdio.h>

int main(void)
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);

    if (n1 == 0 || n2 == 0)
    {
        printf("Please enter non-zero numbers.\n");
        return 0;
    }
    if (n1 % n2 == 0)
        printf("%d is a multiple of %d.\n", n1, n2);
    else if (n2 % n1 == 0)
        printf("%d is a multiple of %d.\n", n2, n1);
    else
        printf("%d and %d are not multiples of each other.\n", 
            n1, n2);
    return 0;
}
