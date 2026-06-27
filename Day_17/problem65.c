#include <stdio.h>
int main() {
    int n1, n2, arr1[50], arr2[50], merged[100];
    printf("Enter size of array1: ");
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);
    printf("Enter size of array2: ");
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);
    int k = 0;
    for (int i = 0; i < n1; i++) merged[k++] = arr1[i];
    for (int i = 0; i < n2; i++) merged[k++] = arr2[i];
    printf("Merged Array: ");
    for (int i = 0; i < k; i++)
        printf("%d ", merged[i]);
    printf("\n");
    return 0;
}