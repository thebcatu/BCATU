#include <stdio.h>
#include <string.h>

struct Address {
    char city[50];
    int pin;
};

struct Employee {
    char name[50];
    int id;
    struct Address address;
    char skills[3][30];
};

int main() {
    struct Employee emp;
    struct Employee *ptr = &emp;

    strcpy(ptr->name, "Kiran");
    ptr->id = 101;
    strcpy(ptr->address.city, "Kathmandu");
    ptr->address.pin = 44600;

    strcpy(ptr->skills[0], "C Programming");
    strcpy(ptr->skills[1], "Data Structures");
    strcpy(ptr->skills[2], "Algorithms");

    printf("Employee Info:\n");
    printf("Name: %s\n", ptr->name);
    printf("ID: %d\n", ptr->id);
    printf("City: %s\n", ptr->address.city);
    printf("PIN: %d\n", ptr->address.pin);
    printf("Skills:\n");
    
    int i;
    for (i = 0; i < 3; i++) {
        printf("- %s\n", ptr->skills[i]);
    }

    return 0;
}

