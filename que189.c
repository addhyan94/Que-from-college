//                                 ~~ Series using While Loop  
/* WAP to print first n even number .*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n, a;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n)
    {
        a = i + i;
        printf("\n %d", a);
        i++;
    }
    
    return 0;
}
