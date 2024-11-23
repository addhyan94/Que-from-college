/*WAP to print sum of series.. 
                1+x^5/3! - 1+x^5+x^7/7! + 1+x^5+x^7+x^13/11! + ......n terms. */

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,p,c,a,b,x,f,j;
    float s;
    p=1;
    b=-1;
    s=0;
    printf("\n enter a N and X value= ");
    scanf("%d%d",&n,&x);
    for(i=1; i<=n; i++)
    {
        p=p+4;
        b=b+4;
        a=pow(x,p);
        c=c+a;
        f=1;
        for(j=1; j<=b; j++)
        {
        f=f*j;
        }
        if(i%2==0)
        {
            s=s-(1.0*c)/b;
        }
        else
        {
            s=s+(1.0*c)/b;
        }
    }
    printf("\n sum = %f",s);
}