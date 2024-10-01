/* WAP to input a number calculate sum of even digit and product of odd digit for ex (If number is 436 , sum of even digit = 4+6 =10 , total of odd diigit =3 ). */

#include <stdio.h> 
#include<conio.h>

int main()
{
    int i, remender, sumEven ,productOdd, n;
     productOdd = 1;
    sumEven = 0;
    printf("\n Enter the value of N= ");
    scanf("%d", &n);

    for (i = n; i > 0; i = i / 10)
    {
        remender = i % 10; 
        if (remender%2==0)
        {
           sumEven=sumEven+remender;  
        }  else
        {
            productOdd = productOdd*remender; 
            
        }
        
    }

    printf("\n Sum of even digits = %d", sumEven);
    printf("\n Product of odd digits = %d", productOdd);

    return 0;
}
