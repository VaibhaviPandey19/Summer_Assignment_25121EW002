#include <stdio.h>
int main() {
    int n, arr[100], sum, found = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter target sum: ");
    scanf("%d", &sum);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("Pair found: %d, %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    if (!found)
        printf("No pair found\n");
    return 0;
}