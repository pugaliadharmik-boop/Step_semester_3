#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100

typedef struct {
    char cartId[20];
    double prices[MAX_ITEMS];
    int itemCount;
    int maxItems;
} Cart;

void createCart(Cart *cart, const char *id, int maxItems) {
    strcpy(cart->cartId, id);
    cart->maxItems = maxItems;
    cart->itemCount = 0;
}

void addItem(Cart *cart, double price) {
    if (cart->itemCount < cart->maxItems) {
        cart->prices[cart->itemCount] = price;
        cart->itemCount++;
    }
}

double getTotal(const Cart *cart) {
    double total = 0;

    for (int i = 0; i < cart->itemCount; i++) {
        total += cart->prices[i];
    }

    return total;
}

int getItemCount(const Cart *cart) {
    return cart->itemCount;
}

int main() {
    Cart cart;

    createCart(&cart, "CART-5", 20);

    addItem(&cart, 250);
    addItem(&cart, 99);
    addItem(&cart, 151);

    printf("Total: %.0f\n", getTotal(&cart));
    printf("Item count: %d\n", getItemCount(&cart));

    return 0;
}