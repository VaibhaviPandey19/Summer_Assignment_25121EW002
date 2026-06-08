#include <stdio.h>

int main() {
    int n, i;
    int original, remainder, result = 0, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // count number of digits
    while (n != 0) {
        digits++;
        n = n / 10;
    }

    n = original;

    while (n != 0) {
        remainder = n % 10;
        int power = 1;
        for (i = 0; i < digits; i++) {
            power = power * remainder;
        }
        result = result + power;
        n = n / 10;
    }

    if (result == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is NOT an Armstrong number.\n", original);
    }

    return 0;
}