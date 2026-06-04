#include <stdio.h>

int main() {
    long long n, count = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    while (n != 0) {
        n = n / 10;
        count++;
    }

    printf("Number of digits = %d", count);

    return 0;
}