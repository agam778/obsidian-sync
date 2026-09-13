#include <stdio.h>

int main(void)
{
    int d, p;
    int arr[10] = {67, 69, 420, 69420};
    int size = 4;

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\nEnter data and position: ");
    scanf("%d%d", &d, &p);

    for (int i = size; i >= p; i--)
        arr[i] = arr[i - 1];

    arr[p - 1] = d;
    size++;

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}