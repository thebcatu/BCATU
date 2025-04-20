#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Bitwise AND (a & b): %d\n", a & b);
    printf("Bitwise OR (a | b): %d\n", a | b);

    printf("Size of a: %zu bytes\n", sizeof(a));
    printf("Size of b: %zu bytes\n", sizeof(b));
    printf("Size of result (a & b): %zu bytes\n", sizeof(a & b));
    printf("Size of result (a | b): %zu bytes\n", sizeof(a | b));

    return 0;
}

