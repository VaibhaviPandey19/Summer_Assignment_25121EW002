#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        int count = 1;
        while (i + 1 < len && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        printf("%c", str[i]);
        if (count > 1)
            printf("%d", count);
    }
    printf("\n");
    return 0;
}