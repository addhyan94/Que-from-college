/* WAP to input a number calculate sum of square of each digit . for ex( If number is 34 =sum=3^2+4^2= 25. )*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i,remender,sum ,n;
    printf("\n Enter the value of N= ");
    scanf("%d",&n);

    for ( i = n; i>0 ; i=i/10)
    {
        remender =i%10;
        sum=sum+remender*remender;
    }
    
    printf("\n Sum of digit =%d",sum);
    
    return 0;
}