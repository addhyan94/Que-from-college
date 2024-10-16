<<<<<<< HEAD
/* 119....    WAP to print sum of following series ..
                                        7+26+63+124.....n terms .*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int n,a,i,s;
    s=0;
    printf("\n Enter a number = ");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        a=(i+1)*(i+1)*(i+1)-1;
        s=s+a;
    }
       printf("\n Sum of the series is: %d", s);
=======
/* 119....    WAP to print sum of following series ..
                                        7+26+63+124.....n terms .*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int n,a,i,s;
    s=0;
    printf("\n Enter a number = ");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        a=(i+1)*(i+1)*(i+1)-1;
        s=s+a;
    }
       printf("\n Sum of the series is: %d", s);
>>>>>>> 2d7c4a7595c9e06094366219d96ea287f5bec18c
}