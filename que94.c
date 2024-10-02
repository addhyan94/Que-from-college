/* WAP to input a number and print factorial value of each digit of ex if number is 35 factorial value of 5=125 , factorial value of 3=6. */

#include <stdio.h>
#include <conio.h>

int main() 
{
    int n , remainder, fact, i;

    printf("\n \t Enter a number: ");
    scanf("%d", &n);

    for (; n > 0; n = n / 10) 
    {
        remainder = n % 10; 
        fact = 1;

        for (i = 1; i <= remainder; i++) 
        {
            fact = fact * i;
        }

        printf("\n Factorial of %d = %d", remainder, fact);
    }

    return 0;
}
