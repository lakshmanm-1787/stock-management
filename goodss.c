#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 50


// ---------------------------------------------------------
// Structure to store each item's details
// ---------------------------------------------------------
struct Item {
    char name[50];
    int quantity;
    float price;
    float total;
};



// ---------------------------------------------------------
// Main Function
// ---------------------------------------------------------
int main() {

    struct Item items[MAX_ITEMS];
    int n;
    int i;

    float grandTotal = 0;


    // -----------------------------------------------------
    // Title Display
    // -----------------------------------------------------
    printf("===== GOODS RECEIPT SYSTEM =====\n");


    // -----------------------------------------------------
    // Ask number of items
    // -----------------------------------------------------
    printf("Enter number of items received: ");
    scanf("%d", &n);


    // -----------------------------------------------------
    // Loop to input details of each item
    // -----------------------------------------------------
    for (i = 0; i < n; i++) {

        printf("\nEnter details for item %d\n", i + 1);


        // ---------------------------
        // Enter item name
        // ---------------------------
        printf("Item Name: ");
        scanf("%s", items[i].name);


        // ---------------------------
        // Enter quantity
        // ---------------------------
        printf("Quantity: ");
        scanf("%d", &items[i].quantity);


        // ---------------------------
        // Enter unit price
        // ---------------------------
        printf("Unit Price: ");
        scanf("%f", &items[i].price);


        // ---------------------------
        // Calculate total for this item
        // ---------------------------
        items[i].total = items[i].quantity * items[i].price;


        // ---------------------------
        // Add to grand total
        // ---------------------------
        grandTotal += items[i].total;
    }



    // -----------------------------------------------------
    // Print Goods Receipt
    // -----------------------------------------------------
    printf("\n\n=========== GOODS RECEIPT ===========\n");


    // Print table header
    printf("%-20s %-10s %-10s %-10s\n",
           "Item Name",
           "Qty",
           "Price",
           "Total");


    // Print each item
    for (i = 0; i < n; i++) {

        printf("%-20s %-10d %-10.2f %-10.2f\n",
               items[i].name,
               items[i].quantity,
               items[i].price,
               items[i].total);
    }


    // -----------------------------------------------------
    // Print Grand Total
    // -----------------------------------------------------
    printf("----------------------------------------------\n");

    printf("GRAND TOTAL: %.2f\n", grandTotal);

    printf("==============================================\n");


    return 0;
}

