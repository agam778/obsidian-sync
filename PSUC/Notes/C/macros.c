#include <stdio.h>
#define g 10

int main(void)
{
    int m;
    printf("Enter mass: ");
    // scanf("%d", &m);
    m = getch();
    printf("Weight: %d", m * g);
}