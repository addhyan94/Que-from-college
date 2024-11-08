/*WAP to input a number and calculater sum of its digits using function .*/
#include <stdio.h>
#include <conio.h>
void sum(int);
int main()
 {
    int n;
    printf("\n Enter a number: ");
    scanf("%d", &n);
    sum(n);
}

void sum(int n)
 {
    int sum,digit;
    sum=0;
    while (n > 0) 
    {
        digit = n % 10;
        sum = sum + digit;
        n =n/ 10;
    }
    printf("\n Sum of digits: %d",sum);
}
