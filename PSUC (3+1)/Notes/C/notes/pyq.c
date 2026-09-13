#include <stdio.h>

int main(void)
{
    char name[50];
    int unit;
    float bill;

    printf("Enter name: ");
    scanf("%s", &name);

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
        bill = unit * 1;
        break;
    case 201 ... 300:
        bill = 200 + ((unit - 200) * 2);
        break;
    default:
        bill = 200 + (100 * 2) + ((unit - 300) * 5);
        break;
    }

    if (bill < 100)
        bill = 100;

    if (bill < 400)
        bill += bill * 0.15;

    printf("Bill: %d", bill);
}