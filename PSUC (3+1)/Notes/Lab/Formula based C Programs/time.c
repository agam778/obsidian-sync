#include <stdio.h>

int main(void)
{
    int time, h, m, s;
    time = 4850;

    h = (time / 3600);
    m = ((time % 3600) / 60);
    s = (time % 60);

    printf("Hours: %d\nMinutes: %d\nSeconds: %d\n", h, m, s);
    return 0;
}