#include <stdio.h>

int main() {
    int start, end, n, i;
    int original, remainder, result, digits, power;

    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (n = start; n <= end; n++) {
        original = n;
        result = 0;
        digits = 0;

        // count digits
        int temp = n;
        while (temp != 0) {
            digits++;
            temp = temp / 10;
        }

        temp = n;

        // calculate sum of digits raised to power
        while (temp != 0) {
            remainder = temp % 10;
            power = 1;
            for (i = 0; i < digits; i++) {
                power = power * remainder;
            }
            result = result + power;
            temp = temp / 10;
        }

        if (result == original) {
            printf("%d\n", original);
        }
    }

    return 0;
}