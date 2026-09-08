#include <stdio.h>

int main(void)
{
    int c = 169;
    float bill;

    if (c < 0)
    {
        printf("Invalid number of calls.\n");
        return 1;
    }

    switch (c)
    {
    case 1 ... 150:
        bill = 0;
        break;
    case 151 ... 250:
        bill = 0.9 * c;
        break;
    case 251 ... 400:
        bill = 1.2 * c;
        break;
    default:
        bill = 1.5 * c;
    }

    printf("Bill: %.2f\n", bill);
    return 0;
}