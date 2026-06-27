#include <stdio.h>
#include <string.h>
struct Book {
    int id;
    char title[50];
    int available;
};
int main() {
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);
    struct Book b[50];
    for (int i = 0; i < n; i++) {
        printf("Enter id and title of book %d: ", i + 1);
        scanf("%d %s", &b[i].id, b[i].title);
        b[i].available = 1;
    }
    int choice, bookId;
    do {
        printf("\n1. Issue Book  2. Return Book  3. Show All  4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter book id to issue: ");
            scanf("%d", &bookId);
            for (int i = 0; i < n; i++) {
                if (b[i].id == bookId) {
                    if (b[i].available) {
                        b[i].available = 0;
                        printf("Book issued successfully\n");
                    } else {
                        printf("Book already issued\n");
                    }
                }
            }
        } else if (choice == 2) {
            printf("Enter book id to return: ");
            scanf("%d", &bookId);
            for (int i = 0; i < n; i++)
                if (b[i].id == bookId) b[i].available = 1;
            printf("Book returned successfully\n");
        } else if (choice == 3) {
            for (int i = 0; i < n; i++)
                printf("ID: %d, Title: %s, Status: %s\n", b[i].id, b[i].title,
                       b[i].available ? "Available" : "Issued");
        }
    } while (choice != 4);
    return 0;
}