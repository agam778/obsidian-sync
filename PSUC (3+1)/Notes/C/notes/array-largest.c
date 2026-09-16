#include <stdio.h>

int main(void)
{
    int a[5] = {38, 3, 12, 96, 69};
    int smallest = a[0];
    int largest = a[0];

    for (int i = 0; i < 5; i++)
    {
        if (a[i] < smallest)
            smallest = a[i];

        if (a[i] > largest)
            largest = a[i];
    }

    printf("Smallest: %d\n", smallest);
    printf("Largest: %d\n", largest);
}