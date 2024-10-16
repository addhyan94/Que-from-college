/*WAP to print first n whole numbers.*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i,a,n;
    printf("\n Enter the value n = ");
    scanf("%d",&n);
    for ( i = 0; i <=n; i++)
    {
        a=i;
        printf("\n %d ",a);
    }
    
    return 0;
}