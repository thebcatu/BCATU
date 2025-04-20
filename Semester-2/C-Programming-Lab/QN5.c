#include <stdio.h>

int main() {
    char ch;

    printf("ASCII values of A-Z:\n");
    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c: %d\n", ch, ch);
    }

    printf("\nASCII values of a-z:\n");
    for (ch = 'a'; ch <= 'z'; ch++) {
        printf("%c: %d\n", ch, ch);
    }

    printf("\nASCII values of 0-9:\n");
    for (ch = '0'; ch <= '9'; ch++) {
        printf("%c: %d\n", ch, ch);
    }

    return 0;
}

