/* WAP to input length of  three sides of triangle and check triangle fromation is possible or not the
 formation is only  possible of sum of two side is always greater than third */

#include <stdio.h>
#include <conio.h>

int main()
 {
    float a, b, c;

    printf("\n Enter the lengths of three sides of the triangle: ");
    printf("\n Side 1: ");
    scanf("%f", &a);
    printf("\n Side 2: ");
    scanf("%f", &b);
    printf("\n Side 3: ");
    scanf("%f", &c);

    if ((a + b > c) && (b + c > a) && (c + a > b)) 
    {
        printf("\n Triangle formation is possible.");
    } 
    else
     {
        printf("\n Triangle formation is not possible.");
     }

    return 0;
}
