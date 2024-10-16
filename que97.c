/* WAP to input a number and check it is magic number or not . a number is called magaic if sum of digits of number 
until sum is morethen 9=1 for eg = if number is 649 , sum = 6+4+9=19=1+9=10=1+0=1. it is magic .*/

#include <stdio.h>
#include <conio.h>

int main() 
{
    int n, remainder, i, sum, o;

    printf("\n \t Enter a number: ");
    scanf("%d", &n);

    o = n;      // 'o' me 'n' ki vlue dali hai ......

    for (i=n ; n > 9;) 
    {
        sum = 0;  

        for (i=n ; n > 0; n = n / 10) 
        {
            remainder = n % 10;  
            sum = sum + remainder;  
        }

        n = sum; 
    }

    if (n == 1) 
    {
        printf("\n %d is a magic number.\n", o);
    } 
    else 
    {
        printf("\n %d is not a magic number.\n", o);
    }

    return 0;
}
