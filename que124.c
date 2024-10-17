/* WAP to print sum of the following series....
                                            5/7+9/13+13/19+7/12+.......n terms. */

#include <stdio.h>
#include <conio.h>

int main()
 {
    int i, a, b, n;
    float s;
    a = 5;
    b = 7;
    s = 0.0;

    printf("\n Enter the number=  ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        s = s + (1.0 * a) / b;
        a = a + 4; 
        b = b + 6;
    }
    printf("\n Sum = %.3f\n", s);
}
