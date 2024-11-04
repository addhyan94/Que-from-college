/* WAP to follow serirs ...
                                *
                               ##
                              ***
                             ####
                            *****
*/
#include<stdio.h>
#include<conio.h>

int main() 
{
    int  i,j,k;

    for ( i = 1; i <=5; i++)
     {
       for (j=1;j<=(5-i);j++)
        {
            printf(" ");
        }
        for (k=1;k<=i;k++) 
        {
            if (i % 2 == 0)
             {
                printf("#");
            } 
            else
             {
                printf("*");
            }
        }
        printf("\n");
    }
}
