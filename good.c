#include <stdio.h>

struct GRN {
    int itemID;
    char itemName[30];
    int oldStock;
    int receivedQty;
    int newStock;
};

int main() {
    struct GRN g;

    printf("Enter Item ID: ");
    scanf("%d", &g.itemID);

    printf("Enter Item Name: ");
    scanf("%s", g.itemName);

    printf("Enter Old Stock: ");
    scanf("%d", &g.oldStock);

    printf("Enter Received Quantity: ");
    scanf("%d", &g.receivedQty);

    g.newStock = g.oldStock + g.receivedQty;

    printf("\n--- GOODS RECEIPT NOTE ---\n");
    printf("Item ID      : %d\n", g.itemID);
    printf("Item Name    : %s\n", g.itemName);
    printf("Old Stock    : %d\n", g.oldStock);
    printf("Received Qty : %d\n", g.receivedQty);
    printf("New Stock    : %d\n", g.newStock);

    return 0;
}