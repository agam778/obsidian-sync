#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char s[50] = "Hello NIgGleT";
    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] = toupper(s[i]);
    }
    printf("%s", s);
}