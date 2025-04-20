#include <stdio.h>

int main() {
    int arr[10], i, j, temp;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nAscending order (Bubble Sort):\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < 9; i++) {
        int max_idx = i;
        for (j = i + 1; j < 10; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        if (max_idx != i) {
            temp = arr[i];
            arr[i] = arr[max_idx];
            arr[max_idx] = temp;
        }
    }

    printf("\n\nDescending order (Selection Sort):\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

