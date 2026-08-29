#include <stdio.h>

int main(void)
{
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);

    if (c >= '0' && c <= '9')
    {
        printf("%c is a digit\n", c);
    }
    else if (c == 'a' || c == 'A' || c == 'e' || c == 'E'
        || c == 'i' || c == 'I' || c == 'o' 
        || c == 'O' || c == 'u' || c == 'U')
    {
        printf("%c is a vowel\n", c);
    }
    else if ((c >= 'a' && c <= 'z') 
        || (c >= 'A' && c <= 'Z'))
    {
        printf("%c is a consonant\n", c);
    }
    else
    {
        printf("%c is not a digit, vowel or consonant\n", c);
    }

    return 0;
}