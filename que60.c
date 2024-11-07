#include <stdio.h>
#include <conio.h>

int main() 
{
    float amount, discount = 0, finalAmount;

    // Input the amount
    printf("Enter the amount: ");
    scanf("%f", &amount);

    // Calculate discount based on amount
    if (amount <= 10000) {
        discount = amount * 0.05;  // 5% discount
    } else if (amount <= 50000) {
        discount = amount * 0.10;  // 10% discount
    } else if (amount <= 100000) {
        discount = amount * 0.20;  // 20% discount
    } else {
        discount = amount * 0.25;  // 25% discount
    }

    // Calculate the final amount after applying discount
    finalAmount = amount - discount;

    // Output the discount and final amount to be paid
    printf("Discount: Rs. %.2f\n", discount);
    printf("Final amount to be paid: Rs. %.2f\n", finalAmount);
}
