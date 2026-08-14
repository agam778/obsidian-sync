#include <stdio.h>

int main(void) {
    int g;
    printf("Enter grade: ");
    scanf("%d", &g);
    if (g<3) {
        printf("F");
    }
}