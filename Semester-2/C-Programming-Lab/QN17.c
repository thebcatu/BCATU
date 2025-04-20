#include <stdio.h>

int main() {
    int i, j, isPrime;
    char repeat;

    do {
        printf("Prime numbers between 1 and 100:\n");

        for (i = 2; i <= 100; i++) {
            if (i != 2 && i % 2 == 0)
                continue;

            isPrime = 1;
            for (j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime)
                printf("%d ", i);
        }

        printf("\nDo you want to repeat? (y/n): ");
        scanf(" %c", &repeat);

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}

