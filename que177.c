//                                 ~~ Series using Do-While Loop  
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
     i = 1;
     while(  i <=n  )
     {
       a=b;
       printf("%d,",a);
       b=b*3;
       i++;
     }
}