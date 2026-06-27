#include <stdio.h>
int main() {
    int n, arr[100], key, count = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter element: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++)
        if (arr[i] == key) count++;
    printf("Frequency = %d\n", count);
    return 0;
}