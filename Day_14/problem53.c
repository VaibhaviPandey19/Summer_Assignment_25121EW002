#include <stdio.h>
int main() {
    int n, arr[100], key, found = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Not Found\n");
    return 0;
}