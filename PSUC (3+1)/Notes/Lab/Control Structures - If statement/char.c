#include <stdio.h>

int main(void)
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= '0' && c <= '9')
    {
        printf("%c is a digit", c);
    }
    else if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
    {
        printf("%c is a vowel", c);
    }
    else if ((c >= 'b' && c <= 'z') || (c >= 'B' && c <= 'Z'))
    {
        printf("%c is a consonant", c);
    }
    else
    {
        printf("%c is not a digit, vowel or consonant");
    }
}