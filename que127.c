/* Wap to print sum of the series 
                                x^3+x^8+x^13+x^18+.....n terms ..*/

#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a,p,x;
float s;
p=-2;
s=0; 
printf("\n Enter a N value and X value...  =");
scanf("%d%d",&n,&x);
for(i=1; i<=n; i++)
{
p=p+5;
a=pow(x,p);
s=s+a;
}
printf("\nsum=%f",s);
}