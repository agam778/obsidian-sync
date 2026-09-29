#include <stdio.h>

int main()
{
    int name[100];
    scanf("%[^^Z]", name);
    printf("%s", name);
}