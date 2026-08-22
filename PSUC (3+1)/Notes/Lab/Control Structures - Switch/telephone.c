#include <stdio.h>

int main(void)
{
    int calls;
    float bill;

    printf("Enter calls: ");
    scanf("%d", &calls);

    switch (calls <= 150 ? 0 : calls <= 250 ? 1
                           : calls <= 400   ? 2
                                            : 3)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    default:
    }
}