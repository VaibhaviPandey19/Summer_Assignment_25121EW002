#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int choice;
    printf("Enter a string: ");
    scanf("%s", str);
    do {
        printf("\n1. Length  2. Reverse  3. Uppercase  4. Palindrome Check  5. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Length = %d\n", (int)strlen(str));
        } else if (choice == 2) {
            char temp[100];
            strcpy(temp, str);
            int len = strlen(temp);
            for (int i = 0; i < len / 2; i++) {
                char c = temp[i];
                temp[i] = temp[len - 1 - i];
                temp[len - 1 - i] = c;
            }
            printf("Reversed = %s\n", temp);
        } else if (choice == 3) {
            char temp[100];
            strcpy(temp, str);
            for (int i = 0; temp[i]; i++)
                if (temp[i] >= 'a' && temp[i] <= 'z') temp[i] = temp[i] - 'a' + 'A';
            printf("Uppercase = %s\n", temp);
        } else if (choice == 4) {
            int len = strlen(str), isPalin = 1;
            for (int i = 0; i < len / 2; i++)
                if (str[i] != str[len - 1 - i]) isPalin = 0;
            printf(isPalin ? "Palindrome\n" : "Not Palindrome\n");
        }
    } while (choice != 5);
    return 0;
}