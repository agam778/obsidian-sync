#include <stdio.h>

struct Address {
    char city[20];
    int pinCode;
};

struct Student {
    char name[20];
    int rollNumber;
    struct Address address;
};

int main() {
    
}