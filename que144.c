//                                      ~~ Patterns ~~
/* WAP to print patterns .......
                           5
                           56
                           567
                           5678
                           56789
*/
#include <stdio.h>
#include<conio.h>

int main() 
{
    int i,j; 

    for (i = 0; i <=5; i++) 
    {
        for ( j = 5; j <= 5 + i; j++)
         {
            printf("%d", j);
        }
        printf("\n");
    }
}
