 /*WAP to follow series..........
                                    5
                                    56
                                    567
                                    5678
                                    56789
                                    5678
                                    567
                                    56
                                    5
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j;
    for(i=5;i<=13;i++)
    {
        if(i<=9)
        {
            for(j=5;j<=i;j++)
            {
                printf("%d",j);
            }
        }
        else
        {
            for(j=5;j<=18-i;j++)
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }
} 