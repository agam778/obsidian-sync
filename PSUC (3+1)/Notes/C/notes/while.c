#include <stdio.h>
#include <math.h>

// int main(void)
// {
//     int n = 7;
//     int i = 1;
//     while (i <= 7)
//     {
//         printf("%d\n", i);
//         i++;
//     }
// }

// int main(void)
// {
//     int s = 0, n = 7, i = 1;
//     while (i <= 7)
//     {
//         s += i;
//         i++;
//     }
//     printf("Sum = %d", s);
// }

// int main(void)
// {
//     int n = 5, sum = 0, x = 2;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             sum -= pow(x, i);
//         }
//         else
//         {
//             sum += pow(x, i);
//         }
//         printf("%02d\n", sum);
//     }
// }

int main(void)
{
    int n = 12345, d = 0, sum = 0;
    int n1 = n;
    while (n > 0)
    {
        d = n % 10;
        // printf("%d", d);
        sum = sum * 10 + d;
        n = n / 10;
    }
    printf("%d", sum);
    if (n1 == sum)
}