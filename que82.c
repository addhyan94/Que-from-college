/* WAP to input a number calculate sum of digit for EX.. ( IF number is 45 , sum of digit = 4+5= 9 . )*/

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
        sum=sum+remender;
    }
    
    printf("\n Sum of digit =%d",sum);
    
    return 0;
}