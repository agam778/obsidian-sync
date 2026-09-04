#include <stdio.h>

int main(void)
{
    int weight = 110, price = 0;
    if (weight <= 100)
        price = 50;
    else if (weight <= 150)
        price = 50 + (weight - 100) * 2;
    else if (weight <= 200)
        price = 100 + (weight - 150) * 5;
    else
        price = 350 + (weight - 200) * 10;
    printf("Price: %d", price);
}