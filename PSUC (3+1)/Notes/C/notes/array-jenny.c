#include <stdio.h>

int main(void)
{
    int d, p, arr[10] = {67, 69, 420, 69420};
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("Enter data and position: ");
    scanf("%d%d", &d, &p);
    for (int i = 9; i > p - 1; i--)
        arr[i + 1] = arr[i];
    arr[p - 1] = d;
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");
}