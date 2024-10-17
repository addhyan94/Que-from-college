/* WAP to print sum of the following series....
                                            1/2+2/3+3/4+4/5+.......n terms. */

#include <stdio.h>
#include <conio.h>

int main()
{
int i,a,b,n;
float s;
a=1;
b=2; 
s=0.0;
printf("\n Enter a number = ");
scanf("%d",&n);
for ( i = 1 ; i <=n ; i++)
{
    a=a+1;
    b=b+1;
    s=s+(1.0*a)/b;

}
    printf("\n Sum = %.3f ",s);
}