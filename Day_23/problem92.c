#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int freq[256] = {0};
    int len = strlen(str);
    for (int i = 0; i < len; i++)
        freq[(int)str[i]]++;
    int maxCount = 0;
    char result;
    for (int i = 0; i < len; i++) {
        if (freq[(int)str[i]] > maxCount) {
            maxCount = freq[(int)str[i]];
            result = str[i];
        }
    }
    printf("Maximum occurring character: %c (%d times)\n", result, maxCount);
    return 0;
}