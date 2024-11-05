
/* WAP to follow Series....
                        1 ,  3 ,  5 ,  7 ,  9    */

#include <stdio.h>
#include<conio.h>
int main()
 {
    int n,i,s;
   
    printf("\n Enter the number of terms: ");
    scanf("%d", &n);
  
    printf("Series: ");
    for (i = 1; i <= n; i++) 
{
    s=2*i-1;
        printf("%d ,  ", s);
    }
}