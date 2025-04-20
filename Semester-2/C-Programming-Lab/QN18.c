#include <stdio.h>

int main() {
    int choice, i, j, rows;

    printf("Choose pattern type:\n");
    printf("1. Number Pyramid\n");
    printf("2. Star Pyramid\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    if (choice == 1) {
        for (i = 1; i <= rows; i++) {
            for (j = 1; j <= rows - i; j++) {
                printf(" ");
            }
            for (j = 1; j <= 2 * i - 1; j++) {
                printf("%d", i);
            }
            printf("\n");
        }
    } else if (choice == 2) {
        for (i = 1; i <= rows; i++) {
            for (j = 1; j <= rows - i; j++) {
                printf(" ");
            }
            for (j = 1; j <= 2 * i - 1; j++) {
                printf("*");
            }
            printf("\n");
        }
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}


