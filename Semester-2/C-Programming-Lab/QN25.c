#include <stdio.h>

#define SQUARE(x) ((x) * (x))

void greet() {
    printf("Hello! Welcome to C programming.\n");
}

void displayValues(int a, int b) {
    printf("Values: a = %d, b = %d\n", a, b);
}

void displayDefault() {
    displayValues(10, 20);
}

int main() {
    int num;

    greet();

    printf("Enter a number to square: ");
    scanf("%d", &num);
    printf("Square of %d is %d\n", num, SQUARE(num));

    printf("Calling displayValues with user-defined values:\n");
    displayValues(5, 15);

    printf("Calling displayValues with default values:\n");
    displayDefault();

    return 0;
}

