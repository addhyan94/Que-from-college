/*WAP to input a number and calculate number of facters using function with return value .*/
#include <stdio.h>
#include <conio.h>
int count(int);
int main() 
{
    int n,r;
    printf("\n Enter a number: ");
    scanf("%d", &n);
    r = count(n);
    printf("\n Number of factors: %d",r);
}

int count(int n) 
{
    int c = 0;
    for (int i = 1; i <= n; i++)
     {
        if (n % i == 0)
         {
            c++;
        }
    }
    return c;
}
