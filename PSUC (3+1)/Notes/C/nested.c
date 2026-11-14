#include <stdio.h>
#include <string.h>

struct Student
{
    char name[20];
    int rollNumber;
    struct Address
    {
        char city[20];
        int pinCode;
    };
};

int main()
{
    struct Student s1;
    strcpy(s1.name, "Aman");
    s1.rollNumber = 12;
    strcpy(s1.address.city, "Delhi");
    s1.address.pinCode = 110001;
    printf("Name: %s\nRoll number: %d\nCity: %s\nPIN code: %d", s1.name, s1.rollNumber, s1.address.city, s1.address.pinCode);
}