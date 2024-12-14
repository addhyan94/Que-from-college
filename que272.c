//              Recursion In function 
// WAP to input a number sum of its digits using recursion.
#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
{
    int n,s;
    printf("Enter a number: ");
    scanf("%d",&n);
    s=sum(n);
    printf("\n Sum of Digits: %d",s);
}

int sum(int x)
{
    if (x==0)
    {
        return 0;
    }
    else
    {
        return (x % 10) + sum(x / 10);
}
}