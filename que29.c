#include <stdio.h>
#include <conio.h>

int main()
{
    int u,a,t,v,d;
printf("\n Enter the number =");
scanf("%d",&u);
printf("\n Enter the number =");
scanf("%d",&a);
printf("\n Enter the number =");
scanf("%d",&t);
v=u+(a*t);
d=u*t+(a*t*t)/2;
printf("\n Value of V=%d,\n Value of D=%d",v,d);
    return 0;
}