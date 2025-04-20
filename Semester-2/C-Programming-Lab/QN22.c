#include <stdio.h>

void squareByValue(int n) {
    static int count1 = 0;
    count1++;
    n = n * n;
    printf("squareByValue result: %d (called %d times)\n", n, count1);
}

void squareByReference(int *n) {
    static int count2 = 0;
    count2++;
    *n = (*n) * (*n);
    printf("squareByReference result: %d (called %d times)\n", *n, count2);
}

int main() {
    int a, b;

    printf("Enter an integer: ");
    scanf("%d", &a);
    b = a;

    squareByValue(a);
    squareByReference(&b);

    squareByValue(a);
    squareByReference(&b);

    return 0;
}

