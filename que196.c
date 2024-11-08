/*WAP  to input a number of terms and print Fibonacci series with this terms using function.*/
#include <stdio.h>
#include <conio.h>
void series(int);
int main() 
{
    int n;
    printf("\n Enter number of terms for Fibonacci series: ");
    scanf("%d", &n);
    series(n);
}

void series(int n)
 {
    int a = 0, b = 1,d;
    for (int i = 1; i <= n; i++)
     {
        printf("%d,", a);
        d= a + b;
        a = b;
        b =d;
    }
}
