//                                 ~~ Series using Do-While Loop  
/* WAP to follow Series...
                      7,15,23,31..n terms . */

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n, a, b;
    b = 7;
    printf("\n Enter a number=");
    scanf("%d", &n);
    printf("Series: ");
    i = 1;
    do
    {
        a = b; 
        printf("%d, ", a);
        b = b + 8;
        i++;
    } while (i <= n);
}
