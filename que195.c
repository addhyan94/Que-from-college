/* WAP to input a number calculate and print Factorial value of this number using function . */
#include <stdio.h>
#include <conio.h>
void calculate(int);
int main() 
{
    int n;
    printf("\n Enter a number: ");
    scanf("%d", &n);
    calculate(n);
}

void calculate(int n)
 {
    int fac = 1;
    for (int i = 1; i <= n; i++) 
    {
        fac = fac* i;
    }
    printf("\n Factorial of %d is: %d", n,fac);
}
