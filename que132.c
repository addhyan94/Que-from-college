/* WAP to print calculate of the series ..
                                        x^7/11-x^12/18+x^17/25-x^22/32+.....n terms */

#include <stdio.h>
#include <conio.h>
#include<math.h>

int main()
{
    int i,x,n,a,p,b;
    float s;
    p=2;
    b=4;
    printf("\n Enter a number= ");
    scanf("%d",&n);
   printf("\n Enter a X value = ");
   scanf("%d",&x);
   for ( i = 1; i <=n; i++)
   {
    p=p+5;
    b=b+7;
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