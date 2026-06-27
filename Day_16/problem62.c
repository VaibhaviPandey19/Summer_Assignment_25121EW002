#include <stdio.h>
int main() {
    int n, arr[100];
    printf("Enter size: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int maxCount = 0, result = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++)
            if (arr[j] == arr[i]) count++;
        if (count > maxCount) {
            maxCount = count;
            result = arr[i];
        }
    }
    printf("Most frequent element = %d (count %d)\n", result, maxCount);
    return 0;
}