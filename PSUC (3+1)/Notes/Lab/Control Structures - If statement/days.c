#include <stdio.h>

int main(void)
{
    int y, m, d = 0;

    printf("Enter year: ");
    scanf("%d", &y);
    printf("Enter months: ");
    scanf("%d", &m);

    if (m < 1 || m > 12)
    {
        printf("Enter valid month.");
        return 0;
    }

    if (m == 2)
    {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
            d = 29;
        else
            d = 28;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        d = 30;
    }
    else
    {
        d = 31;
    }

    printf("Number of days: %d", d);
    return 0;
}