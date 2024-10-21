//                                      ~~ Patterns ~~
/* WAP to print patterns .......
                           9
                           98
                           987
                           9876
                           98765
*/
#include <stdio.h>
#include<conio.h>

int main() 
{
    int i,j ; 

    for ( i = 1; i <= 5; i++) 
    {
        for ( j = 9; j >9; j--)
         {
            printf("%d", j);
        }
        printf("\n");
    }
}
