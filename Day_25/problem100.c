#include <stdio.h>
#include <string.h>
int main() {
    int n;
    char words[20][30];
    printf("Enter number of words: ");
    scanf("%d", &n);
    printf("Enter words:\n");
    for (int i = 0; i < n; i++)
        scanf("%s", words[i]);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(words[j]) > strlen(words[j + 1])) {
                char temp[30];
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }
    printf("Sorted by length:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", words[i]);
    return 0;
}