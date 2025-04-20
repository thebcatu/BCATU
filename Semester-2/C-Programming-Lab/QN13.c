#include <conio.h>
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    ch = getch();

    printf("\nThe character entered is: ");
    putch(ch);

    return 0;
}

