#include <stdio.h>
#include <conio.h>
int main() 
{
    float monthlyIncome, annualIncome, incomeTax = 0;
    printf("Enter your monthly income: ");
    scanf("%f", &monthlyIncome);
    annualIncome = monthlyIncome * 12;
    if (annualIncome <= 200000) {
        incomeTax = 0;  // No tax for income up to 2 lakhs
    } else if (annualIncome <= 500000) {
        incomeTax = (annualIncome - 200000) * 0.10;  // 10% of income exceeding 2 lakhs
    } else if (annualIncome <= 1000000) {
        incomeTax = 30000 + (annualIncome - 500000) * 0.20;  // 30,000 + 20% of income exceeding 5 lakhs
    } else {
        incomeTax = 130000 + (annualIncome - 1000000) * 0.30;  // 1,30,000 + 30% of income exceeding 10 lakhs
    }
    if (incomeTax > 50000) {
        incomeTax += incomeTax * 0.02;
    }
    printf("Your total annual income tax is: Rs. %.2f\n", incomeTax);
}
