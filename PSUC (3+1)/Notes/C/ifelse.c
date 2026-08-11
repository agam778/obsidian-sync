#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int n1, n2;
    char yn;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    // getchar();
    printf("y or n: ");
    scanf("%c", &yn);
    if (getchar() == 'y')
    {
        printf("Sum: %d\n", n1 + n2);
    }
    else
    {
        return 0;
    }
}