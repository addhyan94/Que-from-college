//                      structure
// write a program to input no. of quantity, amount and product name of 5 products and print these record using structure
#include <stdio.h>
struct shop
{
    char Name[50];
    int quantity;
    float amount;
};
struct shop product[5];
void main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter the Name of product %d: ", i + 1);
        scanf(" %s", &product[i].Name);
        printf("\nEnter the quantity of product %d: ", i + 1);
        scanf(" %d", &product[i].quantity);
        printf("\nEnter the amount of product %d: ", i + 1);
        scanf(" %f", &product[i].amount);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nThe Name of product %d : %s", i + 1, product[i].Name);
        printf("\nThe quantity of product %d : %d", i + 1, product[i].quantity);
        printf("\nThe amount of product %d : %.2f", i + 1, product[i].amount);
    }
}