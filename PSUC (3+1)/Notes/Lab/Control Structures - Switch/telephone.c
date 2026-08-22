#include <stdio.h>

int main(void)
{
    int calls;
    double bill;

    printf("Enter calls: ");
    if (scanf("%d", &calls) != 1 || calls < 0)
    {
        printf("Enter a valid non-negative number of calls.\n");
        return 1;
    }

    switch (calls <= 150 ? 0 : calls <= 250 ? 1
                           : calls <= 400   ? 2
                                            : 3)
    {
    case 0:
        bill = 0;
        break;
    case 1:
        bill = (calls - 150) * 0.9;
        break;
    case 2:
        bill = 100 * 0.9 + (calls - 250) * 1.2;
        break;
    case 3:
        bill = 100 * 0.9 + 150 * 1.2 + (calls - 400) * 1.5;
        break;
    default:
        return 1;
    }

    printf("Telephone bill: Rs. %.2f\n", bill);
    return 0;
}