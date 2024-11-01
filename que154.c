 /*WAP to follow series..........
                                9
                                98
                                987
                                9876
                                98765
                                9876
                                987
                                98
                                9
*/
#include <stdio.h>
#include <conio.h>

int main()
{
int i,j;
for(i=9;i>=1;i++)
{
    if(i>=5)
    {
    for(j=9;j>=i;j--)
    {
        printf("%d",j);
    }
    }
    else
    {
        for(j=9;j<=10-i;j--)
        {
            printf("%d",j);
        }
    }
    printf("\n");
}
} 