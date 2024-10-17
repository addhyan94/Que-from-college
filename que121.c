/* WAP to print sum of the following series....
                                            1/1+1/2+1/3+1/4+1/5+1/6.......n terms. */

#include <stdio.h>
#include <conio.h>

int main()
{
int i,a,b,n;
float s;
a=1;
b=1; 
s=0.0;
printf("\n Enter a number = ");
scanf("%d",&n);
for ( i = 1 ; i <=n ; i++)
{
    a=a;
    b=b+1;
    s=s+(1.0*a)/b;

}
    printf("\n Sum = %.3f ",s);
}