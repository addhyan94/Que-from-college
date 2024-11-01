/* WAP to follow series.......
                                9
                               98
                              987
                             9876
                            98765
                             8765
                              765
                               65
                                5
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,k;
    for ( i=9; i>=1; i--)
    {
     if (i>=5)
     {
        for(k=1;k<=(i-5);k++)
        {
            printf(" ");
        }
        for(j=9;j>=i;j--)
        {
            printf("%d",j);
        }
     }
     else
     {
        for(k=1;k<=(5-i);k++)
        {
            printf(" ");
        }
        for(j=(i+4);j>=5;j--)
        {
             printf("%d",j);
        }
     }
     printf("\n");
        
    }
    
}