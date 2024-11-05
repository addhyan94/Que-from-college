//                                 ~~ Series using Do-While Loop  
/* WAP to follow Series....
                        1 ,  3 ,  5 ,  7 ,  9    */

#include <stdio.h>
#include<conio.h>
int main()
{
    int n, i, s;

    printf("\n Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    i = 1;
    do
    {
        s = 2 * i - 1;
        printf("%d ,  ", s);
        i++;
    } while(i <= n);
}
