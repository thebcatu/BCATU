#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s[3];
    int i;

    fp = fopen("students.txt", "r+");
    if (fp == NULL) {
        fp = fopen("students.txt", "w+");
        if (fp == NULL) {
            printf("Error opening file.\n");
            return 1;
        }
        printf("File created.\n");
    }

    for (i = 0; i < 3; i++) {
        fscanf(fp, "%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    for (i = 0; i < 3; i++) {
        if (strcmp(s[i].name, "Bob") == 0) {
            s[i].marks = 65.0;
            fseek(fp, i * sizeof(struct Student), SEEK_SET);
            fprintf(fp, "%s %d %.1f\n", s[i].name, s[i].roll, s[i].marks);
            break;
        }
    }

    fclose(fp);

    fp = fopen("students.txt", "a");
    if (fp == NULL) {
        printf("Error opening file for appending.\n");
        return 1;
    }

    fprintf(fp, "Kiran 4 78.5\n");
    fclose(fp);

    printf("File written successfully.\n");

    return 0;
}

