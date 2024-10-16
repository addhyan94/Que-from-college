/* 114....  WAP to print sum of following series ..
                                    1+2+3+4....n terms. */

#include <stdio.h>
#include<conio.h>

int main()
{
    int n, i, sum;
    sum = 0;

    printf("\n Enter a number = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
     {
        sum = sum + i;
    }
    printf("\n Sum of the series 1 + 2 + 3 + ... + %d is: %d", n, sum);

}
