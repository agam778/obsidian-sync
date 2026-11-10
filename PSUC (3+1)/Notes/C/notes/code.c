#include <stdio.h>
#include <string.h>

int main()
{
    char s[5], s2[5], s3[20];
    strcpy(s, "Bell");
    strcpy(s3, "Yoronova ");

    printf("%s\n", strcpy(s2, s));
    printf("%d\n", strlen(s2));

    strcat(s3, s2);
    printf("%s\n", s3);

    printf("%d\n", strcmp(s3, s2));
}