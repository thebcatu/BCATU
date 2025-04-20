#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {5, 8, 2},
        {9, 1, 7},
        {6, 3, 4}
    };
    int i, j, num, found = 0;

    printf("Enter a number to search: ");
    scanf("%d", &num);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matrix[i][j] == num) {
                printf("Value found at position: [%d][%d]\n", i, j);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
        printf("Not Found\n");

    return 0;
}

