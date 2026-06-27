#include <stdio.h>
int main() {
    char str[200], result[200];
    int j = 0;
    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ')
            result[j++] = str[i];
    }
    result[j] = '\0';
    printf("Without spaces: %s\n", result);
    return 0;
}