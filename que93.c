<<<<<<< HEAD
/* WAP to input a number and calculate Factorial value of this number for ex if number of 4 Factorial = 1*2*3*4=24 .*/

#include <stdio.h>
#include<conio.h>

int main()
{
    int n, i, factorial;
    factorial=1;
    
    printf("\n\t Enter a number: ");
    scanf("%d", &n);

    if (n < 0) 
    {
        printf("\n Factorial of a negative number doesn't exist.");
    } 
    else 
    {
       
        for (i = 1; i <= n; i++) 
        {
            factorial = factorial*i;  
        }
        
        printf("Factorial of %d is: %d", n, factorial);
    }

    return 0;
}
=======
/* WAP to input a number and calculate Factorial value of this number for ex if number of 4 Factorial = 1*2*3*4=24 .*/

#include <stdio.h>
#include<conio.h>

int main()
{
    int n, i, factorial;
    factorial=1;
    
    printf("\n\t Enter a number: ");
    scanf("%d", &n);

    if (n < 0) 
    {
        printf("\n Factorial of a negative number doesn't exist.");
    } 
    else 
    {
       
        for (i = 1; i <= n; i++) 
        {
            factorial = factorial*i;  
        }
        
        printf("Factorial of %d is: %d", n, factorial);
    }

    return 0;
}
>>>>>>> 2d7c4a7595c9e06094366219d96ea287f5bec18c
