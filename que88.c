<<<<<<< HEAD
/* WAP to input a number and check it is prime or composite .
 a number is prime if it has only two factor */

#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, count;
    count = 0;
    printf("\n\t Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
     {
        if (n % i == 0) 
        {
            count++; 
        }
    }

    if (count == 2) 
    {
        printf("\n %d is a Prime number.", n);
    } 
    else
     {
        printf("\n %d is a Composite number.", n);
    }

    return 0;
}
=======
/* WAP to input a number and check it is prime or composite . a number is prime if it has only two factor */

#include <stdio.h>
#include<conio.h>

int main()
{
    int n, i, count;
    count = 0;
    printf("\n\t Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
     {
        if (n % i == 0) 
        {
            count++; 
        }
    }

    if (count == 2) 
    {
        printf("\n %d is a Prime number.", n);
    } 
    else
     {
        printf("\n %d is a Composite number.", n);
    }

    return 0;
}
>>>>>>> 2d7c4a7595c9e06094366219d96ea287f5bec18c
