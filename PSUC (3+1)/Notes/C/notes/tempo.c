#include <stdio.h>

int main()
{
    int a = 10, b = 12, c = 14;
    if (a < b)
    {
        if (a < c)
        {
            printf("a is smallest");
        }
        else
        {
            printf("c is smallest");
        }
    }
}