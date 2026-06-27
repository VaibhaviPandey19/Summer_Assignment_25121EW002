#include <stdio.h>
int main() {
    int choice;
    float a, b;
    do {
        printf("\n1. Add  2. Subtract  3. Multiply  4. Divide  5. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }
        switch (choice) {
            case 1: printf("Result = %.2f\n", a + b); break;
            case 2: printf("Result = %.2f\n", a - b); break;
            case 3: printf("Result = %.2f\n", a * b); break;
            case 4:
                if (b != 0) printf("Result = %.2f\n", a / b);
                else printf("Division by zero error\n");
                break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 5);
    return 0;
}