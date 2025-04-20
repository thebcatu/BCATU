#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    int *arr;
    int n, i;

    printf("Enter number of integers: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed for integers.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);

    char *str;
    int length;

    printf("Enter length of string: ");
    scanf("%d", &length);
    getchar();

    str = (char *)calloc(length + 1, sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed for string.\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(str, length + 1, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    printf("Uppercase string: %s\n", str);
    free(str);

    return 0;
}

