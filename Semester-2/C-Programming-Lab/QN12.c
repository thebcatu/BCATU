#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    ch = getchar();

    printf("The character entered is: ");
    putchar(ch);
    putchar(ch);

    return 0;
}

