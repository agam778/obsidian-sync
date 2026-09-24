#include <stdio.h>

int main()
{
    int n, triangularNumber = 0;

    printf("TABLE OF TRIANGULAR NUMBERS\n");
    printf("n       Sum from 1 to n\n");

    for (n = 1;; n++)
    {
        triangularNumber += n;
        printf("%2d       %d\n", n, triangularNumber);
    }

    return 0;
}