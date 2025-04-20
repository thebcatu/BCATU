#include <stdio.h>

int main() {
    int a;
    float b, sum;

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a float value: ");
    scanf("%f", &b);

    sum = a + b;

    printf("\n---------- Result ----------\n");
    printf("Integer Value:\t%d\n", a);
    printf("Float Value:\t%.2f\n", b);
    printf("Sum:\t\t%.2f\n", sum);
    printf("----------------------------\n");

    return 0;
}

