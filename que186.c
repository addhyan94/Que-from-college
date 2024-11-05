//                                 ~~ Series using While Loop  
/* WAP to print first n natural number */

#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, a;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    i = 1;
    while(i <= n)
    {
        a = i;
        printf("\n %d", a);
        i++;
    }

    return 0;
}
