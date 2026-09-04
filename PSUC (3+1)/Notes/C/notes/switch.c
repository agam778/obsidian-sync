#include <stdio.h>

int main(void)
{
    int a = 5, b = 8, ch;
    printf("Enter your choice: \n");
    scanf("%d", &ch);
    switch (ch)
    {
    case '1': // 49
        printf("A+B=%d", a + b);
        break;
    case 2:
        printf("A-B=%d", a - b);
        break;
    case 3:
        printf("A*B=%d", a * b);
        break;
    case 4:
        printf("A/B=%d", a / b);
        break;
    default:
        return 0;
    }
}