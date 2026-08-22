#include <stdio.h>

int main(void)
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (c == '1' || c == '2' || c == '3' || c=='4' || c=='5')
    {
        printf("%c is a digit", c);
    }
    else if (c == 'a' || c == 'A' || c == 'e' || c == 'E')
    {
        printf("%c is a vowel", c);
    }
    else
    {
        printf("%c is a consonant");
    }
}