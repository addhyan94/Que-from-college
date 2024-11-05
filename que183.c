//                                 ~~ Series using While Loop  
/*  WAP to print first five perfect square number */

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, a;
    i = 0;
    while (i < 5)
    {
        a = i * i;
        printf("\n %d", a);
        i++;
    }
    
    return 0;
}
