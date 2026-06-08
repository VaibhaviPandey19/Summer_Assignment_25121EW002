#include <stdio.h>
int main() {
    int x, n;
    long long result = 1;
    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);
    for (int i = 0; i < n; i++)
        result *= x;
    printf("%d^%d = %lld\n", x, n, result);
    return 0;
}