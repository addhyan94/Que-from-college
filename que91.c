/* WAP to input a number and calculate revers of this number if number is 25 ad then revers number is 52 .*/

#include<stdio.h>
#include<conio.h>

int main ()
{
    int n,rem,rev;
    rev=0;

    printf("\n Enter the number =");
    scanf("%d",&n);
    for ( n=n ; n>0; n=n/10)
    {
       rem=n%10;
       rev= rev * 10 + rem;
    }
    
    printf("\n Reversed number is: %d", rev);

}
