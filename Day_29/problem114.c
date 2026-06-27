#include <stdio.h>
int main() {
    int arr[100], n, choice;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    do {
        printf("\n1. Display  2. Sum  3. Max  4. Min  5. Sort  6. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Array: ");
            for (int i = 0; i < n; i++) printf("%d ", arr[i]);
            printf("\n");
        } else if (choice == 2) {
            int sum = 0;
            for (int i = 0; i < n; i++) sum += arr[i];
            printf("Sum = %d\n", sum);
        } else if (choice == 3) {
            int max = arr[0];
            for (int i = 1; i < n; i++) if (arr[i] > max) max = arr[i];
            printf("Max = %d\n", max);
        } else if (choice == 4) {
            int min = arr[0];
            for (int i = 1; i < n; i++) if (arr[i] < min) min = arr[i];
            printf("Min = %d\n", min);
        } else if (choice == 5) {
            for (int i = 0; i < n - 1; i++)
                for (int j = 0; j < n - i - 1; j++)
                    if (arr[j] > arr[j + 1]) {
                        int t = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = t;
                    }
            printf("Sorted Array: ");
            for (int i = 0; i < n; i++) printf("%d ", arr[i]);
            printf("\n");
        }
    } while (choice != 6);
    return 0;
}