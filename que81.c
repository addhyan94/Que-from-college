/* WAP to input a number and calculatr total number of digits .
 For Eg.. (IF number is 275 , total number digit = 3. )*/

#include <stdio.h>
#include<conio.h>

int main() 
{
    int n, a, i;
    a=0;

    printf("Enter a number = ");
    scanf("%d", &n);
       
        for ( i = n; i> 0; i = i / 10)
         {
            a++; 
        }

    printf("\n Total number of digits: %d", a);

    return 0;
}

