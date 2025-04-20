#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter a line of text: ");
    gets(str);
    
    int i;

    for ( i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }

    puts("Text in uppercase:");
    puts(str);

    return 0;
}

