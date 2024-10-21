/* WAP to print calculate of the series ..
                                        1- (1-x^1)/4!+(1-x^1+x^4)/8!-(1-x^1+x^4-x^3)/16!+ .....n terms*/

#include <stdio.h>
#include <conio.h>
#include<math.h>

int main()
{
    int i,j,n,x,a,b,p,f,c;
    float s;
    s=1.0;
    b=2;
    printf("\n Enter a number= ");
    scanf("%d",&n);
    printf("\n Enter a X value = ");
    scanf("%d",&x);
    for ( i = 1; i <n; i++)
    {
        p=i*i;
        b=b*2;
        a=pow(x,p);
        for(j=1;j<=b;j++)
        {
            f=f*j;
        }
        if (i%2==0)
        {
            c=c+a;
            s=s+(1.0*c)/b;
        }
        else
        {
            c=c-a;
            s=s-(1.0*c)/b;
        }
    }
    printf("\n sum = %.2f",s);
}