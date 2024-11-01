 /*WAP to follow series..........
                                1
                               21
                              321
                             4321
                            54321
                             4321
                              321
                               21
                                1
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,k;
    for ( i = 1; i <=9; i++)
    {
        if(i<=5)
        {
        for(k=1;k<=(5-i);k++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        }
        else
        {
        for(k=1;k<=(i-5);k++)
        {
            printf(" ");
        }
        for(j=(10-i);j>=1;j--)
        {
            printf("%d",j);
        }
        }
        printf("\n");
    }
    
}