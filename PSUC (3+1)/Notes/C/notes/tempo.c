#include <stdio.h>

int main()
{
    int a[100], n, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 1; i < n; i += 2)
        sum = sum + a[i];

    printf("%d", sum);
}