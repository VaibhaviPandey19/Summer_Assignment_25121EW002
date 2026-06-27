#include <stdio.h>
struct Item {
    char name[30];
    int quantity;
    float price;
};
int main() {
    int n;
    printf("Enter number of items: ");
    scanf("%d", &n);
    struct Item items[50];
    for (int i = 0; i < n; i++) {
        printf("Enter name, quantity, price for item %d: ", i + 1);
        scanf("%s %d %f", items[i].name, &items[i].quantity, &items[i].price);
    }
    float totalValue = 0;
    printf("\n--- Inventory Report ---\n");
    for (int i = 0; i < n; i++) {
        float value = items[i].quantity * items[i].price;
        totalValue += value;
        printf("%s -> Qty: %d, Price: %.2f, Value: %.2f\n",
               items[i].name, items[i].quantity, items[i].price, value);
    }
    printf("Total Inventory Value = %.2f\n", totalValue);
    return 0;
}