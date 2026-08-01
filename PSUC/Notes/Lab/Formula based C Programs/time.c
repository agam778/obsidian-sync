#include <stdio.h>

int main(void)
{
    int time, hours, mins, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &time);
    hours = time / 3600;
    mins = (time % 3600) / 60;
    seconds = ((time % 3600) % 60);
    printf("%dh, %dm, %ds\n", hours, mins, seconds);
}