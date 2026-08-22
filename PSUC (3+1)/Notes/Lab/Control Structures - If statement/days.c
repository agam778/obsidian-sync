#include <stdio.h>

int main(void)
{
    int y, m, d=0;
    printf("Enter year: ");
    scanf("%d", y);
    printf("Enter no. of months: ");
    scanf("%d", m);
    if (m < 1 || m > 12)
        printf("Enter valid no. of months.");
    
    if (m >= 1)
        d+=31;
    if (m >= 2)
        if ((y%4==0) && (y%100!=0) || (yea))
}