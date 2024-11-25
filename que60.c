#include <stdio.h>
#include <conio.h>
int main() 
{
    float amount, discount = 0, finalAmount;
    printf("Enter the amount: ");
    scanf("%f", &amount);
    if (amount <= 10000) {
        discount = amount * 0.05;  
    } else if (amount <= 50000) {
        discount = amount * 0.10;  
    } else if (amount <= 100000) {
        discount = amount * 0.20; 
    } else {
        discount = amount * 0.25;  
    }
    finalAmount = amount - discount;
    printf("Discount: Rs. %.2f\n", discount);
    printf("Final amount to be paid: Rs. %.2f\n", finalAmount);
}
