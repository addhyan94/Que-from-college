#include <stdio.h>
#include <conio.h>
#include<math.h>
int main()
{
    int l,b,a,p;
    printf("\n Enter the length = ");
    scanf("%d",&l);
    printf("\n Enter the Wridth = ");
    scanf("%d",&b);;
    a=l*b;
    p=2*(l+b);
    printf("\n Area of Rectangle = %d",a);
    printf("\n Perimeter of Rectangle = %d",p);
    return 0;
}