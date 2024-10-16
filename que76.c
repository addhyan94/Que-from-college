/* WAP to print firsst n natural number */

#include <stdio.h>
#include <conio.h>

int main()
 {
    int n, i,a;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n ; i++) 
    {
        a=i;
        printf("\n %d", a);
    }

    return 0;
}
