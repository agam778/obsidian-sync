#include <stdio.h>

int main(void)
{
    int y, m, d = 0;

    printf("Enter year: ");
    scanf("%d", &y);
    printf("Enter number of months: ");
    scanf("%d", &m);

    if (m < 1 || m > 12)
    {
        printf("Enter a valid month.\n");
        return 0;
    }

    int feb = 28;
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
    {
        feb = 29;
    }

    if (m >= 1)  d += 31;
    if (m >= 2)  d += feb;
    if (m >= 3)  d += 31;
    if (m >= 4)  d += 30;
    if (m >= 5)  d += 31;
    if (m >= 6)  d += 30;
    if (m >= 7)  d += 31;
    if (m >= 8)  d += 31;
    if (m >= 9)  d += 30;
    if (m >= 10) d += 31;
    if (m >= 11) d += 30;
    if (m >= 12) d += 31;

    printf("Number of days: %d\n", d);
    return 0;
}