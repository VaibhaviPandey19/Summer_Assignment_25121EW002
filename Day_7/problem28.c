#include <stdio.h>
void reverse(int n) {
    if (n == 0) return;
    printf("%d", n % 10);
    reverse(n / 10);
}
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Reversed: ");
    reverse(n);
    printf("\n");
    return 0;
}