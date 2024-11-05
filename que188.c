//                                 ~~ Series using While Loop  
/*  WAP to print first n perfect square number */

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, a, n;
    printf("\n Enter the value n = ");
    scanf("%d", &n);
    
    i = 0;
    while (i <= n)
    {
        a = i * i;
        printf("\n %d ", a);
        i++;
    }
    
    return 0;
}
