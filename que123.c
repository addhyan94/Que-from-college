/* WAP to print sum of the following series....
                                            1/2+3/4+5/6+7/8+.......n terms. */

#include <stdio.h>
#include <conio.h>

int main()
 {
    int i, a, b, n;
    float s;
    a = 1; 
    b = 2;
    s = 0.0;

    printf("\n Enter the number =  ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
     {
        s = s + (1.0 * a) / b; 
        a = a + 2; 
        b = b + 2; 
    }

    printf("\n Sum  = %.3f", s);
}
