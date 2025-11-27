#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 50

// Structure to store each item’s details
struct Item {
    char name[50];
    int quantity;
    float price;
    float total;
};

int main() {
    struct Item items[MAX_ITEMS];
    int n, i;
    float grandTotal = 0;

    printf("===== GOODS RECEIPT SYSTEM =====\n");

    printf("Enter number of items received: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details for item %d\n", i + 1);

        printf("Item Name: ");
        scanf("%s", items[i].name);

        printf("Quantity: ");
        scanf("%d", &items[i].quantity);

        printf("Unit Price: ");
        scanf("%f", &items[i].price);

        // Calculate total for the item
        items[i].total = items[i].quantity * items[i].price;
        grandTotal += items[i].total;
    }

    // Print Goods Receipt
    printf("\n\n=========== GOODS RECEIPT ===========\n");
    printf("%-20s %-10s %-10s %-10s\n", "Item Name", "Qty", "Price", "Total");

    for(i = 0; i < n; i++) {
        printf("%-20s %-10d %-10.2f %-10.2f\n",
               items[i].name, items[i].quantity, items[i].price, items[i].total);
    }

    printf("----------------------------------------------\n");
    printf("GRAND TOTAL: %.2f\n", grandTotal);
    printf("==============================================\n");

    return 0;
}
