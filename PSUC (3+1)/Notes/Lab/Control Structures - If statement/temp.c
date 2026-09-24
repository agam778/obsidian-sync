#include <stdio.h>
int main()
{
    int n;

    int sum;
    sum = 0; // initialize sum

    for (n = 1; n < 100; n = n + 1)

        sum = sum + n;

    printf("%d", sum);
    return 0;
}