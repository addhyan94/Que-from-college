/* WAP a program to input a number and check it is neon number or not . a number is neon if sum oof digits of square
 the number equal to the =9 sum =9^2 = 81=8+1=9 */

#include <stdio.h>                     
#include<conio.h>                       

int main()
{
    int n, i, sum , rem;
    sum = 0;

    printf("\n Enter a number= ");
    scanf("%d", &n);

    i = n * n;

    for (i ; i > 0; i= i/10)
     {
        rem = i % 10;  
        sum =sum + rem;         
    }

    if (sum == n)
     {
        printf("\n %d is a Neon Number.", n);
    } 
    else 
    {
        printf("\n %d is not a Neon Number.", n);
    }

    return 0;
}
