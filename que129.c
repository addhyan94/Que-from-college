/* Wap to print sum of the series ..
                                    x^5/12+x^8/16+x^11+x^20+x^14/24+... n terms.*/

#include <stdio.h>
#include <conio.h>
#include<math.h>
int main()
{
    int i,x,a,b,p,n;
    float s;
    s=0;
    p=2;
    b=8;
    printf("\n Enter a N value and X value = ");
    scanf("%d%d",&n,&x);
    for ( i = 1; i <=n ; i++)
    {
        p=p+3;
        b=b+4;
        a=pow(x,p);
        s=s+(1.0*a)/b;
    }
    printf("\n sum = %.2f",s);
}