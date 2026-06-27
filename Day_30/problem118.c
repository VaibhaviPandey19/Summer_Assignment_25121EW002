#include <stdio.h>
#include <string.h>
struct Book {
    char title[50];
    int copies;
};
int main() {
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);
    struct Book b[50];
    for (int i = 0; i < n; i++) {
        printf("Enter title and copies for book %d: ", i + 1);
        scanf("%s %d", b[i].title, &b[i].copies);
    }
    int choice;
    char title[50];
    do {
        printf("\n1. Issue Book  2. Show Books  3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter book title to issue: ");
            scanf("%s", title);
            int found = 0;
            for (int i = 0; i < n; i++) {
                if (strcmp(b[i].title, title) == 0) {
                    found = 1;
                    if (b[i].copies > 0) {
                        b[i].copies--;
                        printf("Book issued\n");
                    } else {
                        printf("No copies available\n");
                    }
                }
            }
            if (!found) printf("Book not found\n");
        } else if (choice == 2) {
            for (int i = 0; i < n; i++)
                printf("%s -> Copies: %d\n", b[i].title, b[i].copies);
        }
    } while (choice != 3);
    return 0;
}