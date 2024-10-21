/* WAP to print calculate of the series ..
                                        x^7/5!-x^15/9!+x^23/13!-x^31/17!.....n terms */

#include <stdio.h>
#include <conio.h>
#include<math.h>

int main()
{
    int i,n,a,p,b,j,x,f;
    float s;
    p=-1;
    b=1;
    printf("\n Enter a number= ");
    scanf("%d",&n);
   printf("\n Enter a X value = ");
   scanf("%d",&x);
   for ( i = 1; i <=n ; i++)
   {
        p=p+8;
        b=b+4;
        a=pow(x,p);

        f=1;
            for ( j = 1; j <=i; j++)
            {
                f=f*j;
            }
            if (i%2==0)
            {
                s=s-(1.0*a)/b;
            }
            else
            {
                s=s+(1.0*a)/b;
            }
    }
                printf("\n Sum= %.2f",s);
}