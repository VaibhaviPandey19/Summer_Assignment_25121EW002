#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    int freq[256] = {0};
    for (int i = 0; str1[i] != '\0'; i++)
        freq[(int)str1[i]]++;
    printf("Common characters: ");
    for (int i = 0; str2[i] != '\0'; i++) {
        if (freq[(int)str2[i]] > 0) {
            printf("%c ", str2[i]);
            freq[(int)str2[i]] = 0;
        }
    }
    printf("\n");
    return 0;
}