#include <stdio.h>

int main()
{
    float a, b;
    char op;
    printf("Enter number operator number: ");
    scanf("%f%c%f", &a, &op, &b);
    switch (op)
    {
    case '+':
        printf("%.2f", a + b);
        break;
    }
}