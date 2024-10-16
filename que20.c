#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float b,h,a;
     printf("\n Enter the length of the tringle = ");
     scanf("%f",&b);
     printf("\n Enter the height of the tringle = ");
     scanf("%f",&h);
     a=0.5*b*h;
     printf("\n Area of the triangle = %f",a);
    return 0;
}