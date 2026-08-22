#include <stdio.h>

int main(void)
{
    int units;
    double bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units < 0)
    {
        printf("Units cannot be negative.\n");
        return 1;
    }

    switch (units <= 100 ? 0 : units <= 200 ? 1
                           : units <= 400   ? 2
                                            : 3)
    {
    case 0:
        bill = 0;
        break;
    case 1:
        bill = (units - 100) * 1.5;
        break;
    case 2:
        bill = 100 * 1.5 + (units - 200) * 2.5;
        break;
    default:
        bill = 100 * 1.5 + 200 * 2.5 + (units - 400) * 3.5;
    }

    printf("Electricity bill: Rs. %.2f\n", bill);
    return 0;
}
