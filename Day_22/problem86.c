#include <stdio.h>
int main() {
    char str[200];
    int count = 0;
    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
            count++;
        i++;
    }
    printf("Word count = %d\n", count + 1);
    return 0;
}