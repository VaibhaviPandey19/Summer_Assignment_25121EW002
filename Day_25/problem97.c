#include <stdio.h>
int main() {
    int n1, n2, a[50], b[50], merged[100];
    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) scanf("%d", &a[i]);
    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) scanf("%d", &b[i]);
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }
    while (i < n1) merged[k++] = a[i++];
    while (j < n2) merged[k++] = b[j++];
    printf("Merged Sorted Array: ");
    for (i = 0; i < k; i++) printf("%d ", merged[i]);
    printf("\n");
    return 0;
}