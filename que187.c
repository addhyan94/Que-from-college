//                                 ~~ Series using While Loop  
/*WAP to print first n whole numbers.*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, a, n;
    printf("\n Enter the value n = ");
    scanf("%d", &n);
    
    i = 0;
    while (i <= n)
    {
        a = i;
        printf("\n %d ", a);
        i++;
    }
    
    return 0;
}
