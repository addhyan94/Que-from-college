/* WAP to input a number and check it is special number or not using function with return value */

#include<stdio.h>
#include<conio.h>
int check(int);
int main()
{
    int n,q;
    printf("Enter a number: ");
    scanf("%d", &n);
    q = check(n);
    if (q == n) 
    {
        printf("%d is a special number.\n", n);
    } 
    else
    {
        printf("%d is not a special number.\n", n);
    }
}

int check(int n)
{
    int temp, fact, sum = 0, digit;
    temp = n;
    while (temp > 0) 
    {
        digit = temp % 10;
        fact = 1;
        for (int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    return sum;
}
