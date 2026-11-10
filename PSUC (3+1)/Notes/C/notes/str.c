#include <stdio.h>
#include <strings.h>

int main()
{
    char s[100], count=0;
    scanf("%[^\n]", s);

    for (int i=0; s[i] != '\0'; i++) {
        count++;
    }
    printf("%d", count);
}