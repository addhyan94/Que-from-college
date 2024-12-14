//              Recursion In function 
// WAP to input a number and count number of fector using recursion.
#include<stdio.h>
#include<conio.h>
int fac(int,int);
void main()
{
    int n,f;
    printf("Enter a number: ");
    scanf("%d",&n);
    f=fac(n,1);
    printf("\n The Count number of Fector: %d",f);
}

int fac(int x, int i)
{
    if (i > x) 
    {
        return 0;
    }

    if (x % i == 0)
    {
        return 1 + fac(x, i + 1);
    } 
    return fac(x, i + 1);
}