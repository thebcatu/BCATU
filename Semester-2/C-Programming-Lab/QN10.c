#include <stdio.h>

int main() {
    int a = 5, b = 3, c = 10, d = 4;
    float result;

    result = (a + b) * ((float)c / d);

    printf("Result of (a + b) * (c / d): %.2f\n", result);

    return 0;
}

