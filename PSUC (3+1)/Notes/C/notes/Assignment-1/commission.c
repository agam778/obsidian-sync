#include <stdio.h>

int main(void)
{
    float c, s;
    printf("Enter sales: ");
    scanf("%f", &s);
    if (s >= 0 && s <= 5000)
        c = s;
    else if (s >= 5001 && s <= 12000)
        c = (s * 3.0;
    else if (s >= 12001 && s <= 22000)
        c = s * 7.0;
    else if (s >= 22001 && s <= 30000)
        c = s * 10.0;
    else if (s >= 30001)
        c = s * 15.0;
    else
        printf("Please enter a valid number.");

    printf("Commission: ")
}