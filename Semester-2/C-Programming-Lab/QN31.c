#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll;
    float marks;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    fprintf(fp, "Mahendra 1 75.5\n");
    fprintf(fp, "Mahara 2 45.0\n");
    fprintf(fp, "Sita 3 88.0\n");
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Students with marks > 60:\n");
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) {
        if (marks > 60) {
            printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
        }
    }

    fclose(fp);
    return 0;
}

