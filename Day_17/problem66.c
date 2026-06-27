#include <stdio.h>
int main() {
    int n1, n2, arr1[50], arr2[50], result[100], k = 0;
    printf("Enter size of array1: ");
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);
    printf("Enter size of array2: ");
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);
    for (int i = 0; i < n1; i++) {
        int dup = 0;
        for (int j = 0; j < k; j++)
            if (result[j] == arr1[i]) dup = 1;
        if (!dup) result[k++] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        int dup = 0;
        for (int j = 0; j < k; j++)
            if (result[j] == arr2[i]) dup = 1;
        if (!dup) result[k++] = arr2[i];
    }
    printf("Union: ");
    for (int i = 0; i < k; i++)
        printf("%d ", result[i]);
    printf("\n");
    return 0;
}