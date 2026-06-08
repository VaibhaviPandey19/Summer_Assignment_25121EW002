#include <stdio.h>

int main() {
    int n, i, largest = -1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            // check if i is prime
            int isPrime = 1;
            int j;
            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime) {
                largest = i;
            }
        }
    }

    if (largest == -1) {
        printf("No prime factors found.\n");
    } else {
        printf("Largest prime factor of %d is: %d\n", n, largest);
    }

    return 0;
}