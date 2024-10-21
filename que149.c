/* WAP to follow series..........
                                 5
                                56
                               567
                              5678
                             56789
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
            for (j=5;j<5+i;j++)
            {
            printf("%d",j);
            }
        printf("\n");
    }
    
}