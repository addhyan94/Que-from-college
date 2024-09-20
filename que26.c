#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float r,h,csa,tsa;
printf("\n Enter the radius of the cylinder = ");
scanf("%f",&r);
printf("\n Enter the height of the cylinder = ");
scanf("%f",&h);
csa=2*3.14159*r*h;
tsa=2*3.14159*r*(r+h);
printf("\n CSA of the cylinder = %f",csa);
printf("\n TSA of the cylinder = %f",tsa);
    return 0;
}