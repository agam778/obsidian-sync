#include <stdio.h>

struct student {
    int rno, m1, m2, m3;
    char name[20];
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct student s[n-1];
    for (int i=0; i<n-1; i++) {
        printf("Enter marks of Student %d\n", i+1);
        printf("Roll No: ");
        scanf("%d", &s[i].rno);
        printf("Name: ");
        scanf("%[^\n]", s[i].name);
        printf("Enter marks in 3 subjects: ");
        scanf("%d")
    }
}