// #include <stdio.h>

// int check_eo(int a);

// int main()
// {
//     int a = 12;
//     if (check_eo(a))
//         printf("%d is even", a);
//     else
//         printf("%d is odd", a);
//     return 0;
// }

// int check_eo(int a)
// {
//     if (a % 2 == 0)
//         return 1;
//     else
//         return 0;
// }

#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int a = 5;
    int b = 7;
    swap(&a, &b);
    printf("%d, %d", a, b);
    return 0;
}

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}