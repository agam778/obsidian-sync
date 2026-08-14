#include <stdio.h>

int main(void)
{
    int g;
    printf("Enter grade: ");
    scanf("%d", &g);
    printf("Grade: ");
    if (g < 3)
    {
        printf("F");
    }
    else if (g == 3 || g == 4)
    {
        printf("D");
    }
    else if (g==5 || g==6) {
        
    }
}