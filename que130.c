/* Wap to print sum of the series ..
                                    x^9/12+x^14/19+x^19/26+x^24/33+...n terms. */

#include <stdio.h>
#include <conio.h>
    #include<math.h>

int main()
{
    int i,n,a,x,p,b;
    float s;
    s=0;
    p=4;
    b=5;
    printf("\n enter a number=");
    scanf("%d%d",&n,&x);
    for(i=1; i<=n;i++)
    {
        p=p+5;
        b=b+7;
        a=pow(x,p);
        s=s+(1.0*a)/b;
    }
    printf("\n sum=%f",s);
}