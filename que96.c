/* WAP to input a number and check it is special number or not a number is called kspecial if some of factroal value of each digit equal to number 
itself for ex = if number is 145 , sum =1!+2!+3!+4!5! = 145.  */

#include <stdio.h>
#include<conio.h>

int main() 
{
    int n, o, remainder, fact, sum , i;
    sum =0;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    o = n;   // 'o' me 'n' ki value dal di 

    for (; n > 0; n = n / 10) 
    {
        remainder = n % 10;  
        fact = 1;

        for (i = 1; i <= remainder; i++) 
        {
            fact = fact * i;
        }

        sum = sum + fact;
    }

    if (sum == o) 
    {
        printf("\n%d is a special number.", o);
    } 
    else 
    {
        printf("\n%d is not a special number.", o);
    }

    return 0;
}
