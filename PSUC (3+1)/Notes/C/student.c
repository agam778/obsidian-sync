#include <stdio.h>

struct student
{
    int rno;
    char name[20];
    float total;
};

int main()
{
    int n;
    float m1, m2, m3;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct student s[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        printf("Enter marks of Student %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].rno);
        printf("Name: ");
        scanf("%[^\n]", s[i].name);
        printf("Enter marks in 3 subjects: ");
        scanf("%f %f %f", &m1, &m2, &m3);
        s[i].total = m1 + m2 + m3;
        m1 = 0;
        m2 = 0;
        m3 = 0;
    }

    for (int i=0; i<)
}