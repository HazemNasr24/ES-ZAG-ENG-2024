#include<stdio.h>

typedef struct {
    unsigned char name[50];
    float cost;
    unsigned int qty;
} item_t;

int main() {
    item_t item1;
    printf("Enter item name: ");
    gets(item1.name);
    printf("Enter item cost: ");
    scanf("%f", &item1.cost);
    printf("Enter item quantity: ");
    scanf("%u", &item1.qty);
    printf("Total cost for %u %s: %.2f\n", item1.qty, item1.name, item1.cost * item1.qty);
    return 0;
}
