#include <stdio.h>
int main()
{
    float amount = 550;
    if (amount > 0 && amount <= 500)
        ;
    else
    {
        if (amount > 500 && amount <= 800)

            amount *= 0.8;

        else
        {
            if (amount >= 800)
                amount *= 0.75;
        }
    }
    printf("%f", amount);
}
