//                                 ~~ Series using Do-While Loop  
/* WAP to follow Series......
                            1,4,7,10...... n terms*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n, s, p;
    p = 1;
    printf("\n Enter a number = ");
    scanf("%d", &n);
    printf(" serise : ");
    i = 1;
    do
    {
        s = p;
        printf("%d,", s);
        p = p + 3;
        i++;
    } while(i <= n);
}
