// WAP to input a number and calculate it's factor using call by reference.

#include<stdio.h>
#include<conio.h>
void factor(int *);
void main()
{
int p;
printf("\n enter a number=");
scanf("%d",&p);
factor(&p);
}
void factor(int *a)
{
    int i,c;
    c=0;
    for(i=1; i<=*a; i++)
    {
if(*a%i==0)
{
    c++;
}
    }
printf("\n number of factors of %d=%d",*a,c);
}