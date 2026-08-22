#include <stdio.h>

int main(void)
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >='0'|| c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9')
    {
        printf("%c is a digit", c);
    }
    else if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
    {
        printf("%c is a vowel", c);
    }
    else
    {
        printf("%c is a consonant", c);
    }
}