#include <stdio.h>
int main() {
    int n1, n2, arr1[50], arr2[50];
    printf("Enter size of array1: ");
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);
    printf("Enter size of array2: ");
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);
    printf("Intersection: ");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}