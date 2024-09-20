#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int a,b;
printf("\n Enter the first number = ");
scanf("%d",&a);

printf("\n Enter the second number = ");
scanf("%d",&b);
printf("\n \t Before swapping ");
printf("\n Number First =%d, \n Number Second=%d  ",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n \t After Swapping");
printf("\n Number first =%d,\n Number second =%d",a,b);
    return 0;
}