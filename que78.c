/*  WAP to print first n perfect square number */

#include <stdio.h>
#include <conio.h>

int main()
{
    int i,a,n;
    printf("\n Enter the value n = ");
    scanf("%d",&n);
    for ( i = 0; i <=n; i++)
    {
        a=i*i;
        printf("\n %d ",a);
    }
    
    return 0;
}