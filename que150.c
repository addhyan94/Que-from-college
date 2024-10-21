 /*WAP to follow series..........
                                 9
                                98
                               987
                              9876
                             98765
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
            for (j=9;j> 9-i;j--)
            {
            printf("%d",j);
            }
        printf("\n");
    }
    
}