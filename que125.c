<<<<<<< HEAD
/* WAP to print sum of the following series....
                                            9/14+15/22+21/30+27/38+.......n terms. */

#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,i,n;
    float s;
    a=3;
    b=6;
    s=0.0;
    printf("\n Enter a number =");
    scanf("%d",&n);
    for ( i = 1 ; i <=n ; i++)
    {
      a=a+6;
      b=b+8;
      s=s+(1.0*a)/b;
    }
    printf("\n Sum =%.2f",s);
=======
/* WAP to print sum of the following series....
                                            9/14+15/22+21/30+27/38+.......n terms. */

#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,i,n;
    float s;
    a=3;
    b=6;
    s=0.0;
    printf("\n Enter a number =");
    scanf("%d",&n);
    for ( i = 1 ; i <=n ; i++)
    {
      a=a+6;
      b=b+8;
      s=s+(1.0*a)/b;
    }
    printf("\n Sum =%.2f",s);
>>>>>>> 2d7ba09969854d3087c4693dcc6407a3844b4229
}