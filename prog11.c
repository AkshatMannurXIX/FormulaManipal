#include <stdio.h>
#include <stdlib.h>

struct Prod
{
    int id;
    char name[100];
    int qty;
    float price;
};

int main()
{
    int i, n;
    float total = 0;
    printf("Enter the number of products: \n");
    scanf("%d", &n);
    struct Prod p[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter details for product %d: \n", i + 1);
        printf("Product ID: ");
        scanf("%d", &p[i].id);
        printf("Product Name: ");
        scanf("%s", p[i].name);
        printf("Quantity: ");
        scanf("%d", &p[i].qty);
        printf("Price: ");
        scanf("%f", &p[i].price);

        total += p[i].qty * p[i].price;
    }
    int maxQtyIdx = 0, maxQty = 0;
    int maxPriceIdx = 0;
    float maxPrice = 0;
    for (i = 0; i < n; i++)
    {
        if (p[i].qty > maxQty)
        {
            maxQty = p[i].qty;
            maxQtyIdx = i;
        }

        if (p[i].price > maxPrice)
        {
            maxPrice = p[i].price;
            maxPriceIdx = i;
        }
    }

    printf("Total value of all products: %.2f \n", total);
    printf("Product with max quantity: \n");
    printf("ID: %d\n", p[maxQtyIdx].id);
    printf("Name: %s\n", p[maxQtyIdx].name);
    printf("Quantity: %d\n", p[maxQtyIdx].qty);
    printf("Price: %.2f\n", p[maxQtyIdx].price);
    printf("Product with max price: \n");
    printf("ID: %d\n", p[maxPriceIdx].id);
    printf("Name: %s\n", p[maxPriceIdx].name);
    printf("Quantity: %d\n", p[maxPriceIdx].qty);
    printf("Price: %.2f\n", p[maxPriceIdx].price);

    return 0;
}
