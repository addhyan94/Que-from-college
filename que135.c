/* WAP to print calculate of the series ..
                                        x^5/3!-x^8/5!+x^11/7!-x^14/9!+.....n terms */

#include <stdio.h>
#include <conio.h>
#include<math.h>

int main()
{
    int i,n,a,p,b,j,x,f;
    float s;
    p=2;
    b=1;
    printf("\n Enter a number= ");
    scanf("%d",&n);
   printf("\n Enter a X value = ");
   scanf("%d",&x);
   for ( i = 1; i <=n ; i++)
   {
        p=p+3;
        b=b+2;
        a=pow(x,p);

        f=1;
            for ( j = 1; j <=n; j++)
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