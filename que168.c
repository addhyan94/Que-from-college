/*WAP to follow series ......
    55 
   4  4
  3    3
 2      2
1        1

*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,k;
    for ( i = 5; i>=1 ; i--)
    {
        for( j = 1; j <=(i-1); j++)
        {
            printf(" ");
        }
        printf("%d",j);
        for( k = 1; k <=(10-2*i); k++)
        {
            printf(" ");
        }
        printf("%d",j);
    printf("\n");
    }
}