
/* WAP to follow Series.... 
                            5,15,45,105 .... n terms. */

#include <stdio.h>
#include <conio.h>

int main()
{
    int i,n,a,b;
    a=0;
    b=5;
     printf("\n Enter a number = ");
     scanf("%d",&n);
     printf(" Series: ");
     
     for ( i = 1; i <=n ; i++)
     {
       a=b;
       printf("%d,",a);
       b=b*3;
     }
}