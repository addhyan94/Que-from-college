<<<<<<< HEAD
/* 120....    WAP to print sum of following series ..
                                        3+6+12+24+48....n terms .*/

#include <stdio.h>
#include <conio.h>

int main() 
{
    int n, i, sum , a;
    a = 3;
    sum=0;

    printf("\n Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
     {
        sum = sum +a;
        a = a*2; 
    }

    printf("\n Sum of the series 3 + 6 + 12 + 24 + ... for %d terms is: %d", n, sum);
}
=======
/* 120....    WAP to print sum of following series ..
                                        3+6+12+24+48....n terms .*/

#include <stdio.h>
#include <conio.h>

int main() 
{
    int n, i, sum , a;
    a = 3;
    sum=0;

    printf("\n Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
     {
        sum = sum +a;
        a = a*2; 
    }

    printf("\n Sum of the series 3 + 6 + 12 + 24 + ... for %d terms is: %d", n, sum);
}
>>>>>>> 2d7c4a7595c9e06094366219d96ea287f5bec18c
