#include <stdio.h>
#include <string.h>

struct Address
{
    char city[20];
    int pinCode;
};

struct Student
{
    char name[20];
    int rollNumber;
    struct Address address;
};

int main()
{
    struct Student s1;
    strcpy(s1.name, "Aman");
    s1.rollNumber = "12";
    strcpy(s1.address.city, "Delhi");
    s1.address.pinCode = "110001";
}