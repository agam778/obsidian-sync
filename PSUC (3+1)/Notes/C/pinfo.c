#include <stdio.h>

struct personal
{
    char name[20];
    int d, m, y;
    float salary;
};

int main()
{
    struct personal p;
    printf("Enter name: ");
    scanf("%[^\n]", p.name);
    printf("Enter date of joining (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &p.d, &p.m, &p.y);
    printf("Enter Salary: ");
    scanf("%f", &p.salary);

    printf("Personal Information\n\nName: %s\nDate of Joining: %d/%d/%d\nSalary: %.2f\n", p.name, p.d, p.m, p.y, p.salary);
}