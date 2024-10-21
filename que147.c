/* WAP to follow series..........
                                 1
                                11
                               111
                              1111
                             11111
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,k;
    for ( i = 1; i <=5; i++)
    {
        for ( k =  1;k<=(5-i);k++)
        {
                printf(" ");
        }
            for (j=1;j<=i;j++)
            {
            printf("1");
            }
        printf("\n");
    }
    
}