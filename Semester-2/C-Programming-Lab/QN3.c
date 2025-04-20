#include <stdio.h>

int main() {
    int a = 10, b = 5, sum, diff, prod;
    float div;

    sum = a + b;
    diff = a - b;
    prod = a * b;
    div = (float)a / b;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Division: %.2f\n", div);

    return 0;
}

