#include <stdio.h>
#include <string.h>
int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    scanf("%[^\n]s", sentence);
    char *word = strtok(sentence, " ");
    char longest[100] = "";
    while (word != NULL) {
        if (strlen(word) > strlen(longest))
            strcpy(longest, word);
        word = strtok(NULL, " ");
    }
    printf("Longest word: %s\n", longest);
    return 0;
}