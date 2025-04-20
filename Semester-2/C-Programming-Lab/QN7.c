#include <stdio.h>

int main() {
    int age;
    int isCitizen;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Are you a citizen? (1 for Yes, 0 for No): ");
    scanf("%d", &isCitizen);

    if (age >= 18 && isCitizen) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}

