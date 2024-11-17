/* WAP to input a number and calculate sum of all factors using function with return value */

#include <stdio.h>
#include <conio.h>

int sum(int);

int main() 
{
    int num, r;
    printf("\n Enter a number: ");
    scanf("%d", &num);
    r = sum(num);
    printf("\n The sum of all factors of %d is: %d", num, r);
}

int sum(int n)
 { 
    int sum = 0;
    for (int i = 1; i <= n; i++) 
    {
        if (n % i == 0)
        {
            sum =sum + i;
        }
    }
    return sum; 
}
