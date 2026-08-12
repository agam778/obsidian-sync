#include <stdio.h>

int main(void)
{
    enum Day
    {
        SUN,
        MON = 5,
        TUE,
        WED,
        THU,
        FRI,
        SAT
    };
    enum Day today = TUE;
    printf("%d", today);
}