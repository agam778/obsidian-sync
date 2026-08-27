#include <stdio.h>

int main(void)
{
    int g;
    printf("Enter grade: ");
    scanf("%d", &g);

    if (g < 0 || g > 10)
    {
        printf("Invalid score. Please enter a value between 0 and 10.\n");
        return 0;
    }

    printf("Grade: ");
    if (g >= 9)
        printf("A\n");
    else if (g >= 7)
        printf("B\n");
    else if (g >= 5)
        printf("C\n");
    else if (g >= 3)
        printf("D\n");
    else
        printf("F\n");

    return 0;
}