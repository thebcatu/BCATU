#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int sum = 0;
    int i;

    for (i = 0; i < 5; i++) {
        sum += *ptr;
        ptr++;
    }

    printf("Sum: %d\n", sum);

    ptr = arr + 4;
    printf("Reversed array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", *ptr);
        ptr--;
    }
    printf("\n");

    int x = 10;
    int *p = &x;
    printf("Address of x: %p\n", (void*)&x);
    printf("Value using dereference: %d\n", *p);

    return 0;
}

