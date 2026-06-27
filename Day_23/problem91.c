#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    if (strlen(str1) != strlen(str2)) {
        printf("Not Anagram\n");
        return 0;
    }
    for (int i = 0; str1[i] != '\0'; i++)
        freq[(int)str1[i]]++;
    for (int i = 0; str2[i] != '\0'; i++)
        freq[(int)str2[i]]--;
    int isAnagram = 1;
    for (int i = 0; i < 256; i++)
        if (freq[i] != 0) isAnagram = 0;
    if (isAnagram)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");
    return 0;
}