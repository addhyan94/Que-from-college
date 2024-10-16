/* WAP to input a number and and print total number of factor of this number .
 for ex- if number is 10 = total number of factor = 4  */

#include <stdio.h>
#include<conio.h>

int main()
{
    int n, i, count;
    count=0;

    printf("\n\t Enter a number: ");
    scanf("%d", &n);

      for (i = 1; i <= n; i++)
       {
        if (n % i == 0) 
        {
            count++; 
        }
    }

    printf("\n Total number of factors of %d = %d", n, count);

    return 0;
}
