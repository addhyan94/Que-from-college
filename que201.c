/* WAP to input a number and calculate number of digits using function with return value. */
#include <stdio.h>
#include <conio.h>
int count(int);
int main()
 {
    int n,r;
    printf("\n Enter a number: ");
    scanf("%d", &n);
    r = count(n);
    printf("\n Number of digits: %d",r);
}

int count(int n)
 {
    int c=0;
    while (n > 0)
     {
        n = n/10;
        c++;
    }
    return c;
}
