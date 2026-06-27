#include <stdio.h>
int main() {
    int n, arr[100];
    printf("Enter size (n elements from 1 to n+1, one missing): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int expectedSum = (n + 1) * (n + 2) / 2;
    int actualSum = 0;
    for (int i = 0; i < n; i++)
        actualSum += arr[i];
    printf("Missing Number = %d\n", expectedSum - actualSum);
    return 0;
}