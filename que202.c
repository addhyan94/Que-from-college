/* WAP  to input a number and calculate sum of digits of this numberusing faction with return value. */
#include <stdio.h>
#include <conio.h>
int sum(int);
int main() 
{
    int n,r;
    printf("\n Enter a number: ");
    scanf("%d", &n);
    r = sum(n);
    printf("\n Sum of digits: %d",r);
}

int sum(int n) 
{
    int sum = 0;
    while (n > 0)
     {
        sum =sum + n % 10;
        n = n/ 10;
    }
    return sum;
}
