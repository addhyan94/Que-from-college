/*#include <stdio.h>
#include <conio.h>

int main()
{
    int n, rem,fact,i,j;
     fact=1;
     printf("\n enter a number ");
     scanf("%d",&n);

     for (i=n ; i>0;i=i/10)
     {
        rem=i%10;
        fact=1;
        for ( j = 1; j<=rem; i++)
        {
            fact=fact*j;
        }
        printf("\n factorial of %d = %d ", rem,fact);
        
     }
    return 0;
}*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a;
printf("\n enter a number =");
scanf("%d",&n);
for(i=n; i<=n; i++)
{
a=i*i*i+1;
printf("%d",a);
}
}