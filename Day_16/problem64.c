#include <stdio.h>
int main() {
    int n, arr[100];
    printf("Enter size: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int result[100], k = 0;
    for (int i = 0; i < n; i++) {
        int dup = 0;
        for (int j = 0; j < k; j++)
            if (result[j] == arr[i]) { dup = 1; break; }
        if (!dup) result[k++] = arr[i];
    }
    printf("Array without duplicates: ");
    for (int i = 0; i < k; i++)
        printf("%d ", result[i]);
    printf("\n");
    return 0;
}