#include <conio.h>
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    ch = getche();

    printf("\nThe ASCII value of '%c' is: %d\n", ch, ch);

    return 0;
}

