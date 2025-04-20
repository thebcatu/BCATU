#include <stdio.h>
#include <string.h>
#include <ctype.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int sumArray(int arr[], int size) {
    int sum = 0, i;
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int countVowels(char str[]) {
    int i, count = 0;
    for (i = 0; str[i]; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }
    return count;
}

int main() {
    int num, fact;
    int arr[5], i, sum;
    char str[100];

    printf("Enter a number for factorial: ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("Factorial of %d = %d\n", num, fact);

    printf("Enter 5 integers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    sum = sumArray(arr, 5);
    printf("Sum of array elements = %d\n", sum);

    printf("Enter a string: ");
    scanf("%s", str);
    printf("Number of vowels = %d\n", countVowels(str));

    return 0;
}

