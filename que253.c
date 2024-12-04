// WAP to input a number calculate it's factorial value using call by reference.

#include<stdio.h>
#include<conio.h>
void fact(int *);
void main()
{
int r;
printf("\n enter a number=");
scanf("%d",&r);
fact(&r);
}
void fact(int *a)
{
    int i,f;
    f=1;
    if(*a<0)
    {
        printf("\n factorial value of negative number does not exist");
    }
    else
    {
for(i=1; i<= *a; i++)
{
    f=f*i;
}
printf("\n factorial value of %d=%d", *a,f);
    }
}