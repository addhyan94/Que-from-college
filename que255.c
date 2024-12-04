// WAP to input a number calculate sum of it's digits using call by reference.

#include<stdio.h>
#include<conio.h>
void digits(int *);
void main()
{
int n;
printf("\n enter a number=");
scanf("%d",&n);
digits(&n);
}
void digits(int *p)
{
    int r,s;
    s=0;
    for(;*p>0; *p=*p/10)
    {
        r=*p%10;
        s=s+r;
    }
    printf("\n sum of digits=%d",s);
}