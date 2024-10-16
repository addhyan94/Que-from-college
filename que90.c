/* wap to input a number and check it is perfect number or not a number if perfect sum of all factor excluding 
the number = number itself. for ex- if number is 6 sum of factor= 1+2+3=6 */

#include <stdio.h>
#include<conio.h>

int main()
{
    int n, i, sum ;
    sum=0;
    
    printf("\n\t Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) 
    {
        if (n % i == 0)
         {
            sum = sum+i;  
        }
    }
    if (sum == n)
     {
        printf("\n%d is a Perfect Number.", n);
    } 
    else
     {
        printf("\n%d is not a Perfect Number.", n);
    }

    return 0;
}
