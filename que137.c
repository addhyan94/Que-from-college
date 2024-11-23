/* WAP to input and claculation series ...
        x^3/4 + x^3+x^7/11 + x^3+x^7+x^11/18 + .....n terms.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int i,n,p,a,b,x,c;
    float s;
    p=-1;
    b=-3;
    s=c=0;
    printf("\n enter a N and X value= ");
    scanf("%d%d",&n,&x);
    for(i=1; i<=n; i++)
    {
        p=p+4;
        b=b+7;
        a=pow(x,p);
        c=c+a;
        s=s+(1.0*c)/b;
        }
    printf("\n Sum = %.2f",s);
}