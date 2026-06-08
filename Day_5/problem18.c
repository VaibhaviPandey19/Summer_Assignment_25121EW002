#include <stdio.h>

int main() {
    int n, i;
    int original, remainder, result = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        remainder = n % 10;

        // find factorial of digit
        fact = 1;
        for (i = 1; i <= remainder; i++) {
            fact = fact * i;
        }

        result = result + fact;
        n = n / 10;
    }

    if (result == original) {
        printf("%d is a Strong number.\n", original);
    } else {
        printf("%d is NOT a Strong number.\n", original);
    }

    return 0;
}
//A strong number is a mathematical number where the sum of the factorials of its individual digits is equal to the original number itself