//              union
// Write a program to input house no. city name and pincode of 5 persons and display these values using Union. 
#include <stdio.h>
#include<conio.h>
union shop
{
    char Name[50];
    int quantity;
    float amount;
};
union shop product[5];
void main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter the Name of product %d: ", i + 1);
        scanf(" %s", &product[i].Name);
        printf("\nThe Name of product %d : %s", i + 1, product[i].Name);
        printf("\nEnter the quantity of product %d: ", i + 1);
        scanf(" %d", &product[i].quantity);
        printf("\nThe quantity of product %d : %d", i + 1, product[i].quantity);
        printf("\nEnter the amount of product %d: ", i + 1);
        scanf(" %f", &product[i].amount);
        printf("\nThe amount of product %d : %.2f", i + 1, product[i].amount);
    }
}