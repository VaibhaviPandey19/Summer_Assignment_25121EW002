#include <stdio.h>
int main() {
    float balance = 0;
    int choice;
    float amount;
    do {
        printf("\n1. Deposit  2. Withdraw  3. Check Balance  4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposited. New balance = %.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance)
                    printf("Insufficient balance\n");
                else {
                    balance -= amount;
                    printf("Withdrawn. New balance = %.2f\n", balance);
                }
                break;
            case 3:
                printf("Current balance = %.2f\n", balance);
                break;
            case 4:
                printf("Thank you!\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);
    return 0;
}