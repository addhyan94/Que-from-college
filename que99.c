/* WAP to input two number and print factroal value of each number between these number . */

#include <stdio.h>
#include<conio.h>

int main()
 {
    int num1, num2, i, j, fact,t;

    printf("\n Enter two numbers (lower and upper limit): ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
     {
        t= num1;
        num1 = num2;
        num2 = t;
    }

    for (i = num1; i <= num2; i++)
     {
        fact = 1; 
        for (j = 1; j <= i; j++)
         {
            fact = fact* j; 
        }
        printf("\n Factorial of %d = %d", i, fact);
    }

    return 0;
}
