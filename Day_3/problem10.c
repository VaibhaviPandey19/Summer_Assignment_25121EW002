#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        isPrime = 1;

        if (i <= 1) {
            isPrime = 0;
        } else {
            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}