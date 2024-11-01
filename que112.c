/*112....  WAP to print tribinocci serise 
                                0,1,1,2,4,7,13,24... n terms */

#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a,b,c,s;
a=-1;
b=1;
c=0;
printf("enter a number=");
scanf("%d",&n);
for(i=1; i<=n;i++)
{
    s=0;
    s=a+b+c;
    a=b;
    b=c;
    c=s;
    printf("%d, ",s);
}
}