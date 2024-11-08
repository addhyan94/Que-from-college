/*WAP to input a number and check it is neon number or not using function with return value.*/
#include <stdio.h>
#include <conio.h>
int check(int);
int main() 
{
    int n, b;
    printf("\n Enter a number: ");
    scanf("%d", &n);
    b = check(n);
    if (b == 1) // "1" aaya to true ( neon number hai yess)
    {
        printf("\n %d is a Neon number", n);
    }
     else // "0" aaya to false hai ( neon number nahi hai noo )
    {
        printf("\n %d is not a Neon number", n);
    }
}

int check(int n)
 {
    int sq = n * n;
    int sum = 0;
    while (sq > 0) 
    {
        sum = sum + sq % 10;
        sq = sq / 10;
    }
    if (sum == n)
     {
        return 1; // Neon hai toh true return hona chahii
    } 
    else
     {
        return 0; // Neon nahi hai toh false return hona chahii
    }
}