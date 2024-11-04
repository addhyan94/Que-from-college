/*WAP to follow series ......
*        *
 *      *
  *    *
   *  *
    **   
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,k;
    for ( i = 1; i <=5 ; i++)
    {
        for( j = 1; j <=(i-1); j++)
        {
            printf(" ");
        }
        printf("*");
        for( k = 1; k <=(10-2*i); k++)
        {
            printf(" ");
        }
        printf("*");
    printf("\n");
    }
}