<<<<<<< HEAD
/* WAP to print sum of the following series....
                                                */
=======
/* Wap to print sum of the series 
                                x+x^2+x^3+x^4+....... n terms. */

#include <stdio.h>
#include <conio.h>
#include<math.h>

int main()
{
    int i,n,a,p,x;
    float s;
    p=0;
    s=0;
    printf("\nEnter a N value and  X value .. =");
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++)
    {
        p=p+1;
        a=pow(x,p);
        s=s+a;
    }
    printf("\n sum=%f",s);
    
     }
>>>>>>> 2d7ba09969854d3087c4693dcc6407a3844b4229
