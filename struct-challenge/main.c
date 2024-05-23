#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

struct item {
    char *itemName;
    int quantity;
    float price;
    float amount; // quantity * price
};

void readItem(struct item *itemParam) {
    printf("Please enter a product name: ");
    scanf("%29s", itemParam->itemName); // Limiting input to avoid buffer overflow

    printf("Please enter a price for the product: ");
    scanf("%f", &(itemParam->price));

    printf("Please enter quantity: ");
    scanf("%d", &(itemParam->quantity));

    itemParam->amount = itemParam->quantity * itemParam->price; // Calculate the amount
}

void print(struct item *pItemParam) {
    printf("Item Name: %s\n", pItemParam->itemName);
    printf("Price: %.2f\n", pItemParam->price);
    printf("Quantity: %d\n", pItemParam->quantity);
    printf("Amount: %.2f\n", pItemParam->amount);
}

int main() {
    struct item myItem;
    struct item *pItem;
    pItem = &myItem;
    pItem->itemName = malloc(30 * sizeof(char));

    if (pItem->itemName == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    readItem(pItem);
    print(pItem);
    free(pItem->itemName);
    return 0;
}
