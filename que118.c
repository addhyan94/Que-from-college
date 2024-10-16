/* 118...   WAP to print sum of following series ..
                                        2+5+10+17......n   terms*/

#include <stdio.h>
#include<conio.h>

int main()
 {
    int n, i, sum , a , b;
    a= 2; 
    b = 3; 
    sum=0;

    printf("\n Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
     {
        sum = sum + a; 
        a= a+b; 
        b= b+ 2; 
    }

    printf("\n Sum of the series 2 + 5 + 10 + 17 + ... for %d terms is: %d", n, sum);
}
