
/* WAP to follow Series...
                      7,15,23,31..n terms . */

#include <stdio.h>
#include <conio.h>

int main()
{
    int i,n,a,b;
    b=7;
    printf("\n Enter a number=");
    scanf("%d",&n);
    printf("Series: ");
    for ( i = 1; i <=n ; i++)
    {
        a=b; 
        printf("%d, ",a);
         b=b+8;
    }
}