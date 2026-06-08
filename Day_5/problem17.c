#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == n) {
        printf("%d is a Perfect number.\n", n);
    } else {
        printf("%d is NOT a Perfect number.\n", n);
    }

    return 0;
}
//A perfect number is a positive integer that is equal to the sum of its proper divisors, 
//which are all of its positive divisors excluding the number itself.
