#include <stdio.h>

int main() {
    int pin, option;
    float balance = 1000.0, amount;

    printf("Enter your PIN: ");
    scanf("%d", &pin);

    if (pin != 1234) {
        printf("Invalid PIN. Access denied.\n");
        return 0;
    }

menu:
    printf("\n----- ATM Menu -----\n");
    printf("1. Withdrawal\n");
    printf("2. Deposit\n");
    printf("3. Balance Check\n");
    printf("4. Exit\n");
    printf("Select an option: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > balance) {
                printf("Insufficient balance.\n");
            } else {
                balance -= amount;
                printf("Withdrawal successful. Remaining balance: %.2f\n", balance);
            }
            goto menu;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Deposit successful. New balance: %.2f\n", balance);
            goto menu;

        case 3:
            printf("Current balance: %.2f\n", balance);
            goto menu;

        case 4:
            printf("Thank you for using the ATM.\n");
            break;

        default:
            printf("Invalid option.\n");
            goto menu;
    }

    return 0;
}

