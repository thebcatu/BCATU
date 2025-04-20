#include <stdio.h>
#include <string.h>

void modifyArray(int *arr, int size) {
    int i;
    for (i = 0; i < size; i++) {
        *(arr + i) *= 2;
    }
}

void sortStrings(char *str[], int n) {
    int i, j;
    char *temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i;
    modifyArray(arr, 5);
    printf("Modified array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    char *names[] = {"Zara", "Alex", "John", "Bob"};
    int n = 4;
    sortStrings(names, n);
    printf("Sorted names: ");
    for (i = 0; i < n; i++) {
        printf("%s ", names[i]);
    }
    printf("\n");

    char *msg = "Hello";
    char **pp = &msg;
    printf("Message using pointer to pointer: %s\n", *pp);

    return 0;
}

