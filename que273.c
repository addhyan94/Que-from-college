//              Recursion In function 
// WAP to input a number and count number of digits using recursion.
#include<stdio.h>
#include<conio.h>
int count(int);
void main()
{
    int n,co;
    printf("Enter a number: ");
    scanf("%d",&n);
    co=count(n);
    printf("\n Count Number of digits = %d",co);
}

int count(int x)
{
    if (x==0)
    {
        return 0;
    }
    else
    {
        return 1 + count(x / 10);
    }    
}

/*~~~Output 
Enter a number: 789
Count Number of digits = 3

*/