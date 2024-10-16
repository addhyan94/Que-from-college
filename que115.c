/* 115...  WAP to print sum of following series ..
                                            1+4+9+16..... terms */

#include <stdio.h>
#include<conio.h>

int main()
 {
    int n, i, sum ;
    sum=0;

    printf("\n Enter the number = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
     {
        sum = sum + (i * i); 
    }

    printf("\n Sum of the series 1^2 + 2^2 + 3^2 + ... + %d^2 is: %d", n, sum);
}
