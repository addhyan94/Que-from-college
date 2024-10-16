<<<<<<< HEAD
/* WAP to inpit a number and calculate sum of Factorial value of each digit for ex if number is 35 sum of Factorialvalue of digits =120+6 =126. */

#include <stdio.h>
#include<conio.h>

int main()
 {
    int n, new, remainder, fact, i, sum ;
    sum=0;

    printf("\n Enter a number: ");
    scanf("%d", &n);

    new = n; 

    for (; n > 0; n = n / 10)
     {
        remainder = n % 10;  
        fact = 1; 
 
        for (i = 1; i <= remainder; i++) 
        {
            fact =fact* i;
        }

        sum =sum + fact;
    }

    printf("\n Sum of factorial values of digits of %d = %d", new, sum);

    return 0;
}
=======
/* WAP to inpit a number and calculate sum of Factorial value of each digit for ex if number is 35 sum of Factorialvalue of digits =120+6 =126. */

#include <stdio.h>
#include<conio.h>

int main()
 {
    int n, new, remainder, fact, i, sum ;
    sum=0;

    printf("\n Enter a number: ");
    scanf("%d", &n);

    new = n; 

    for (; n > 0; n = n / 10)
     {
        remainder = n % 10;  
        fact = 1; 
 
        for (i = 1; i <= remainder; i++) 
        {
            fact =fact* i;
        }

        sum =sum + fact;
    }

    printf("\n Sum of factorial values of digits of %d = %d", new, sum);

    return 0;
}
>>>>>>> 2d7c4a7595c9e06094366219d96ea287f5bec18c
