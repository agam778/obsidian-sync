#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char s[50] = "Hello NIgGleT";
    for (int i = 0; i < strlen(s); i++)
    {
        s[i] = toupper(s[i]);
    }
    printf("%s", s);
}