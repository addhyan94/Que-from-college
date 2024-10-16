<<<<<<< HEAD
/* 111..  WAP to print fibonacci series ..
                                    0,1,1,2,3,4,5,8,10... n terms */

#include <stdio.h>
#include <conio.h>

int main()
{
    int n,s,a,b,i;
    a=-1;
    b=1;
    printf("\n Enter a number = ");
    scanf("%d",n);
     printf("Tribonacci Series: ");
    for ( i = 1; i <=n ; i++)
    {
        s=a+b;
        a=b;
        b=s;
        printf("%d, ",s);
    }
=======
/* 111..  WAP to print fibonacci series ..
                                    0,1,1,2,3,4,5,8,10... n terms */

#include <stdio.h>
#include <conio.h>

int main()
{
    int n,s,a,b,i;
    a=-1;
    b=1;
    printf("\n Enter a number = ");
    scanf("%d",n);
     printf("Tribonacci Series: ");
    for ( i = 1; i <=n ; i++)
    {
        s=a+b;
        a=b;
        b=s;
        printf("%d, ",s);
    }
>>>>>>> 2d7c4a7595c9e06094366219d96ea287f5bec18c
}