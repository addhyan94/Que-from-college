/* WAP to print calculate of the series ..
                                        1- x^1/3+x^4/7-x^9/11+.....n terms */

#include <stdio.h>
#include <conio.h>
#include<math.h>

int main()
{
    int i,x,n,a,p,b;
    float s;
    p=1;
    b=3;
    printf("\n Enter a number= ");
    scanf("%d",&n);
   printf("\n Enter a X value = ");
   scanf("%d",&x);
   for ( i = 2; i <=n; i++)
   {
    p=p+3;
    b=b+4;
    a=pow(x,p);
    if (i%2==0)
            {
                s=s-(1.0*a)/b;
            }
            else
            {
                s=s+(1.0*a)/b;
            }
    
   }
   printf("\n sum= %.2f",s);
}