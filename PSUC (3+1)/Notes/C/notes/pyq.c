#include <stdio.h>

int main(void)
{
    int unit;
    float bill;

    printf("Enter number of units: ");
    scanf("%d", &unit);

    if (unit <= 0)
    {
        printf("Enter valid number of units.");
        return 0;
    }

    switch (unit)
    {
    case 0 ... 200:
        bill = unit * 1.0;
        break;
    case 201 ... 300:
        bill = 200.0 + ((unit - 200.0) * 2.0);
        break;
    default:
        bill = 200.0 + (100.0 * 2.0) + ((unit - 300.0) * 5.0);
        break;
    }

    if (bill < 100)
        bill += 100;

    if (bill > 400)
        bill += bill * 0.15;

    printf("Bill: %.2f", bill);
}