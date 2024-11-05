//                                 ~~ Series using While Loop  
/* WAP to print first five even number .*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, a;
    i = 1;
    while (i <= 5)
    {
        a = i + i;
        printf("\n %d", a);
        i++;
    }
    
    return 0;
}
