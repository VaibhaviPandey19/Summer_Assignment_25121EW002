#include <stdio.h>
struct Contact {
    char name[50];
    char phone[15];
};
int main() {
    int n;
    printf("Enter number of contacts: ");
    scanf("%d", &n);
    struct Contact c[50];
    for (int i = 0; i < n; i++) {
        printf("Enter name and phone number for contact %d: ", i + 1);
        scanf("%s %s", c[i].name, c[i].phone);
    }
    printf("\n--- Contact List ---\n");
    for (int i = 0; i < n; i++)
        printf("Name: %s, Phone: %s\n", c[i].name, c[i].phone);
    return 0;
}