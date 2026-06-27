#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int isPalin = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalin = 0;
            break;
        }
    }
    if (isPalin)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}