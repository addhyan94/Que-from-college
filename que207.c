/* WAP to input a number and check it is perfect number or not using function with return value */

#include <stdio.h>
#include <conio.h>
int check(int);
int main() 
{
    int num, r;
    printf("\n Enter a number: ");
    scanf("%d", &num);
    r = check(num);
    if (r == 1)
     {
        printf("\n %d is a Perfect number", num);
    } 
    else 
    {
        printf("\n %d is not a Perfect number", num);
    }
}

int check(int n)
 {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
     {
        if (n % i == 0)
         {
            sum += i;
        }
    }
   if (sum == n)
    {
    return 1;
    } 
else
 {
    return 0;
}

}
