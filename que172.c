//                                 ~~ Patterns using While Loop 
/*WAP to follow Series ....
                   2 ,  4 ,  6 ,  8 ,  10     */


#include <stdio.h>
#include<conio.h>

int main()
 {
    int n,i,s;
   
    printf("/n Enter the number of terms: ");
    scanf("%d", &n);
   
    printf("Series: ");
    i = 1;
    while( i <= n) 
{
    s=2*i;
        printf("%d ,  ", s);
         i++;
    }
 }