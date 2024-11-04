/*WAP to follow series ...... 
*    *
*  *
**
*  *
*    *
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i,k,j;
    for ( i = 1; i <=5; i++)
    {
        if(i<=3)
        {
            /*for(j=i;j<=(i-1);j++)
            {
                printf(" ");
            }*/
            printf("*");
            for(k=1;k<=(6-2*i);k++)
            {
                printf(" ");
            }
            printf("*");
        }
        else
        {
           /* for(j=i;j<=(5-i);j++)
            {
                printf(" ");
            }*/
            printf("*");
            for(k=1;k<=(2*i-6);k++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    
}