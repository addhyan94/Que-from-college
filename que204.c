/*WAP to input a number and check it is prime or compositive using function with return value .*/
#include <stdio.h>
#include <conio.h>
int check(int);
int main() 
{
    int n,r;
    printf("\n Enter a number: ");
    scanf("%d", &n);
    r = check(n);
    if (r == 1) 
    {
        printf("\n %d is a Prime number",n);
    } 
    else
    {
        printf("\n %d is a Composite number",n);
    }
}

int check(int n) 
{
   int s = 1;
    if (n <=1) 
    {
        s = 0;
    } 
    else 
    {
        for (int i = 2; i <= n / 2;i++)
         {
            if (n% i==0)
            {
                s = 0;
            }
        }
    }
    return s;
}

