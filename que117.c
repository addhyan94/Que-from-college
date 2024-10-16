<<<<<<< HEAD
/* 117...  WAP to print sum of following series ..
                                     5+9+13+17..... n terms. */
   
#include <stdio.h>
#include<conio.h>

int main() 
{
    int n, i,t,sum ,a,d;
    a = 5;
    d = 4; 
    sum=0;

    printf("\n Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
     {
        t = a + (i * d); 
        sum = sum+t; 
    }

    printf("Sum of the series 5 + 9 + 13 + ... for %d terms is: %d\n", n, sum);
}
=======
/* 117...  WAP to print sum of following series ..
                                     5+9+13+17..... n terms. */
   
#include <stdio.h>
#include<conio.h>

int main() 
{
    int n, i,t,sum ,a,d;
    a = 5;
    d = 4; 
    sum=0;

    printf("\n Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
     {
        t = a + (i * d); 
        sum = sum+t; 
    }

    printf("Sum of the series 5 + 9 + 13 + ... for %d terms is: %d\n", n, sum);
}
>>>>>>> 2d7c4a7595c9e06094366219d96ea287f5bec18c
