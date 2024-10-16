<<<<<<< HEAD
/* 113..  WAP to print non fibonacci series ...
                               4,6,7,9,10,11,12.... n terms   */

#include <stdio.h>
#include <conio.h>

int main()
{
    int n,a,b,s,i,j;
    a=-1;
    b=1;
    printf("\n Enter a number= ");
    scanf("%d",&n);
    for ( i = 1; i <=n ; )
    {
        s=a+b;
        a=b;
        b=s;
        for ( j = a+1 ; j < b ; j++)
        {
           printf(" %d ",j);
           i++;
           if(i==n)
           break;
        }
        
    }
}

/*#include <stdio.h>
#include<conio.h>

int main()
 {
    int n, s, a, b, i, c;
    a = 0; 
    b = 1;
    c = 0;

    printf("\n Enter the number = ");
    scanf("%d", &n);

    printf("Non-Fibonacci Series: ");
    for (i = 4; c < n; i++)
     {
        s = a + b; 

        if (i >s)
         {
            printf("%d, ", i); 
            c++; 
        }
         else 
         {
            a = b;
            b = s;
        }
    }
}
*/
=======
/* 113..  WAP to print non fibonacci series ...
                               4,6,7,9,10,11,12.... n terms   */

#include <stdio.h>
#include <conio.h>

int main()
{
    int n,a,b,s,i,j;
    a=-1;
    b=1;
    printf("\n Enter a number= ");
    scanf("%d",&n);
    for ( i = 1; i <=n ; )
    {
        s=a+b;
        a=b;
        b=s;
        for ( j = a+1 ; j < b ; j++)
        {
           printf(" %d ",j);
           i++;
           if(i==n)
           break;
        }
        
    }
}

/*#include <stdio.h>
#include<conio.h>

int main()
 {
    int n, s, a, b, i, c;
    a = 0; 
    b = 1;
    c = 0;

    printf("\n Enter the number = ");
    scanf("%d", &n);

    printf("Non-Fibonacci Series: ");
    for (i = 4; c < n; i++)
     {
        s = a + b; 

        if (i >s)
         {
            printf("%d, ", i); 
            c++; 
        }
         else 
         {
            a = b;
            b = s;
        }
    }
}
*/
>>>>>>> 2d7c4a7595c9e06094366219d96ea287f5bec18c
