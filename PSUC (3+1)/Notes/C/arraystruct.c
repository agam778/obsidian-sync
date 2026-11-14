#include <stdio.h>

struct Student {
    char name[20];
    float gpa;
};

int main() {
    struct Student students[] = {{"Agam", 2.0}, {"Shaina", 5.0}, {"Jayant", 10.0}, {"Broski", 4.0}};

    for (int i=0; i<sizeof(students)/sizeof(students[0]); i++) {
        printf("Name: %s\tGPA: %.2f\n", students[i].name, students[i].gpa);
    }

}