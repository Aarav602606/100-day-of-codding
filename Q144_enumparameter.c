#include <stdio.h>
#include <string.h>

struct Item {
    int itemCode;
    float price;
    char itemName[40];
};

void displayItem(struct Item product) {
    printf("Item Code: %d\n", product.itemCode);
    printf("Item Name: %s\n", product.itemName);
    printf("Price: %.2f\n", product.price);
}

int main() {
    struct Item laptop;
    laptop.itemCode = 4578;
    laptop.price = 999.99;
    strcpy(laptop.itemName, "Gaming Laptop");

    struct Item mouse = {1234, 25.50, "Wireless Mouse"};

    printf("--- Details for Laptop ---\n");
    displayItem(laptop);

    printf("\n--- Details for Mouse ---\n");
    displayItem(mouse);

    return 0;
}
