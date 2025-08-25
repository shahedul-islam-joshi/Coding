#include <stdio.h>

struct store
{
    char name[20];
    float price;
    int quantity;
};

struct store update(struct store product, float price, int n);
float multi(struct store stock);

int main()
{
    float p_increment, value;
    int q_increment;
    struct store item = {"xyz", 25.75, 12};

    printf("Input increment value:\n");
    printf("Price increment & quantity increment:\n");
    scanf("%f %d", &p_increment, &q_increment);

    item = update(item, p_increment, q_increment);

    printf("Updated values of item:\n\n");
    printf("Name: %s\n", item.name);
    printf("Price: %f\n", item.price);
    printf("Quantity: %d\n", item.quantity);

    value = multi(item);
    printf("\nValue of item is %f\n", value);

    return 0;
}

struct store update(struct store product, float p, int q)
{
    product.price += p;
    product.quantity += q;
    return product;
}

float multi(struct store stock)
{
    return stock.price * stock.quantity;
}
