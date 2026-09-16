#include <stdio.h>

int main()
{
    int a[100], n;
    int i, largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    if(a[0] > a[1])
    {
        largest = a[0];
        second = a[1];
    }
    else
    {
        largest = a[1];
        second = a[0];
    }

    for(i = 2; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second)
        {
            second = a[i];
        }
    }

    printf("Largest = %d\n", largest);
    printf("Second largest = %d", second);

    return 0;
}