#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + 1;
    b = b - 1;

    a = a - 1;
    b = b + 1;

    printf("Swapped values: a = %d, b = %d\n", a, b);

    int larger = (a > b) ? a : b;
    printf("Larger number: %d\n", larger);

    return 0;
}

