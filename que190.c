//                                 ~~ Series using While Loop  
/* WAP to print first n odd number .*/
#include <stdio.h>
#include <conio.h>

int main() 
{
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    i = 1;
    while (i <= 9) 
    {
        printf("%d ", i); 
        i = i + 2;
    }

    return 0;
}
