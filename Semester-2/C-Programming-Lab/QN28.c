#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void printPassed(struct Student s[], int size) {
    int i;
    printf("Students with marks > 50:\n");
    for (i = 0; i < size; i++) {
        if (s[i].marks > 50) {
            printf("Name: %s, Roll: %d, Marks: %.2f\n", s[i].name, s[i].roll, s[i].marks);
        }
    }
}

int main() {
    struct Student students[3] = {
        {"Mahendra", 1, 75.5},
        {"Mahara", 2, 45.0},
        {"Sita", 3, 88.0}
    };

    printPassed(students, 3);

    return 0;
}

