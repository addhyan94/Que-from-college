
/* WAP t follow Series......
                            1,4,7,10...... n terms*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i,n,s,p;
    p=1;
    printf("\n Enter a number = ");
    scanf("%d",&n);
    printf(" serise : ");

    for ( i = 1; i <=n; i++)
    {
        s=p;
        printf("%d,",s);
        p=p+3;
        
    }
}