#include <stdio.h>
#define g 10

int main(void)
{
    int m;
    printf("Enter mass: ");
    scanf("%d", &m);
    printf("Weight: %d", m * g);
}