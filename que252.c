//                   Pointer
// WAP to input length and breadth of a mectangle and calculate its area and perimeter using call by reference .

#include<stdio.h>
#include<conio.h>
void area(float *,float *);
void calculate(float *,float *);
void main()
{
    float length, breadth ;
    printf("\n Enter a length: ");
    scanf("%f",&length);
    printf("Enter a Breadth: ");
    scanf("%f",&breadth);
    area(&length,&breadth);
    calculate(&length,&breadth);
}

void area(float *x,float *y)
{
    float ar;
    ar=(*x) * (*y);
    printf("\n Area of rect: %.2f ",ar);
}

void calculate (float *t , float *v )
{
    float pr;
    pr= 2* ((*t) + (*v));
    printf("\n Perimeter of rect: %.2f",pr);
}