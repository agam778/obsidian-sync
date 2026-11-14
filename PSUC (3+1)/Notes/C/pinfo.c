#include <stdio.h>

struct personal {
    char name[20];
    int d, m, y;
    float salary;
};

int main() {
    struct personal p;
    printf("Enter name: ");
    scanf("%[^\n]", p.name);
    printf("Enter date of joining (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &p.d, &p.m, &p.y);
    printf("Enter Salary: ")
}