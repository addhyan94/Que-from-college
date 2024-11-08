/* WAP to input X and N and calculater sum of following series...
        x/1+x^2/2+x^3+3+........n terms using functions. */
#include <stdio.h>
#include <conio.h>
void Series(float,float);
int main() 
{
    float x,n;
    printf("\n Enter the value of X: ");
    scanf("%f", &x);
    printf("\n Enter the number of terms N: ");
    scanf("%f", &n);
    Series(x,n);
}

void Series(float x,float n)
 {
    float sum = 0,p;
    for (int i = 1; i <= n; i++) 
    {
        p = pow(x, i) / i;
        sum = sum + p ;
    }
    printf("\n Sum of the series: %f", sum);
}
