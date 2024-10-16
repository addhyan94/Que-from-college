/* Wap to follow Series.....
                            2,9,28,64...n terms  */

#include<stdio.h>
#include<conio.h>

int main ()
{
    int i,n,s;
    printf("\n Enter a number =");
    scanf("%d",&n);

    printf(" series :");
    for ( i = 1; i <=n; i++)
    {
        s=i*i*i+1;
        printf("%d , ",s);
    }
    
}