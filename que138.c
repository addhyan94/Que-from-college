/*WAP to calculate and print series ...
               1+ x+x^4/9 + 1+x^4+x^7/18 + 1+x^4+x^7+x^10/36+......n terms.    */

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int a, b, c, p, i, x, n;
    float s;
    s = 0;
    p = 1;
    b = 9 / 2;
    c = 1;
    printf("\n Enter n, x=");
    scanf("%d %d", &n, &x);
    for (i = 0; i <= n; i++)
    {
        p=p+3;
        b=b*2;
        a=pow(x, p);
        c=c+a;
        s=s+(1.0*c)/b;
    }
    printf("\n Sum = %f",s);
}