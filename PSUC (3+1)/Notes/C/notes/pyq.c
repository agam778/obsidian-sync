#include <stdio.h>

int main(void)
{
    char name[50];
    int unit, charge;

    printf("Enter name: ");
    scanf("%s", &name);

    printf("Enter number of units: ");
    scanf("%d", &unit);

    switch (unit)
    {
    case 0 ... 200:
        charge = unit * 1;
        break;
    case 201 ... 300:
        charge = 
    }
}