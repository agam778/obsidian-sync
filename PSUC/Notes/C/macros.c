#include <stdio.h>
#define g 10
#define WEIGHT(a, b) ((a) * (b))

int main(void)
{
    int m;
    printf("Enter mass: ");
    scanf("%d", &m);
    printf("Weight: %d", WEIGHT(m, g));
}