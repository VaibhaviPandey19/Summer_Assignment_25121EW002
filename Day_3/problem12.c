#include <stdio.h>

int main() {
    int a, b, i, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // find gcd first
    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    // lcm formula
    lcm = (a * b) / gcd;

    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}