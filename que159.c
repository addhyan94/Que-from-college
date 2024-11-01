 /*WAP to follow series..........
                                    *
                                   ***
                                  *****
                                 *******
                                *********
                                 *******
                                  *****
                                   ***
                                    *
*/
#include <stdio.h>
#include <conio.h>

int main() 
{
    int i, j, k;
    
    for (i = 1; i <= 7; i++) 
    {
        if (i <= 4)
         {
            for (k = 1; k <= 4 - i; k++) 
            {
                printf(" ");
            }
            for (j = 1; j <= 2 * i - 1; j++)
             {
                printf("*");
            }
        } 
        else 
        {
            for (k = 1; k <= i - 4; k++) 
            {
                printf(" ");
            }
            for (j = 1; j <= 2 * (8 - i) - 1; j++)
             {
                printf("*");
            }
        }
        printf("\n");
    }
}
