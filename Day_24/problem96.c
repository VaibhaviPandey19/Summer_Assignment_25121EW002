#include <stdio.h>
#include <string.h>
int main() {
    char str[100], result[100];
    int seen[256] = {0}, j = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (!seen[(int)str[i]]) {
            result[j++] = str[i];
            seen[(int)str[i]] = 1;
        }
    }
    result[j] = '\0';
    printf("Without duplicates: %s\n", result);
    return 0;
}