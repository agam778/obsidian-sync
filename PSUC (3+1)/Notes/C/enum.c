#include <stdio.h>

int main(void) {
    enum Day{SUN, MON, TUE, WED, THU, FRI, SAT};
    enum Day today = MON;
    printf("%d", today);
}