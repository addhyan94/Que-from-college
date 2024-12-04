//                   Pointer
// Wap to input 2 number and swap these number using call by reference .

#include<stdio.h>
#include<conio.h>
void swap(int *, int  *);
int main()
{
    int a,b;
    printf("\n Enter First number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf(":: Before Swaping :: \n");
    printf("\n Value of A= %d || Value of B= %d",a,b);
    swap(&a,&b);
    printf("\n Value of A= %d || Value of B= %d",a,b);
}
void swap(int *x, int *y)
{
    int z;
    printf("\n Addresh of A=X = %d || Addresh of B=Y = %d",x,y);
    printf("\n Value of *X= %d || Value of *Y= %d",*x,*y);
    z=*x;
    *x=*y;
    *y=z;
    printf("\n :: After Swaping :: \n");
    printf("\n Value of *X= %d || Value of *Y= %d",*x,*y);
}