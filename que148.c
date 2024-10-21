/* WAP to follow series..........
                                 1
                                21
                               321
                              4321
                             54321
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
            for (j=i;j>=1;j--)
            {
            printf("%d",j);
            }
        printf("\n");
    }
    
}