#include <stdio.h>

int main(void)
{
    int n = 4, count = 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            count++;
    }

    if (count == 0)
        printf("Number is prime");
    else
        printf("Number is not prime");

    return 0;
}