/*WAP to input tow number and print all prime number between these number*/ 

#include <stdio.h>
#include<conio.h>

int main() 
{
    int num1, num2, i, j, Prime,sp;

    printf("\n Enter two numbers (intervals): ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) 
    {
       sp = num1;
        num1 = num2;
        num2 = sp;
    }

    printf("\n Prime numbers between %d and %d are: ", num1, num2);

    for (i = num1; i <= num2; i++) 
    {
        if (i >= 2) 
        {
            Prime = 1; 

            for (j = 2; j <= i / 2; j++) 
            {
                if (i % j == 0) 
                {
                    Prime = 0;
                }
            }
            if (Prime == 1) 
            {
                printf("%d ", i);
            }
        }
    }
}
