#include <stdio.h>

int main()
{
    // int n1, n2, sum;
    // printf("Enter first number: ");
    // scanf("%d", &n1);
    // printf("Enter second number: ");
    // scanf("%d", &n2);
    // sum = n1 + n2;
    // printf("%d", sum);
    // char bc=65;
    // printf("%d", sizeof(bc));
    // int d = 4;
    // printf("%d", ++d);
    // return 0;

    enum Day
    {
        MON,
        TUE,
        WED,
        THUR,
        FRI
    };
    enum Day today = WED;
    printf("%d", today);
}