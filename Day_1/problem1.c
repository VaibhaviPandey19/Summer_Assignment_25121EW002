#include <stdio.h>

int main() {
    int n, i, total = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        total += i;
    }

    printf("Sum = %d", total);

    return 0;
}