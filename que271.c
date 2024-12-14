//              Recursion In function 
// WAP to input a number calculate facorial value of this number using recursion.
#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
    int n,f;
    printf("Enter a number : ");
    scanf("%d",&n);
    f=fact(n);
    printf("\nThe Fact value of %d : %d",n,f);
}

int fact(int x)
{
    if (x==1)
    {
        return(1);
    }
    else
    {
        return(x*fact(x-1));
    }
}