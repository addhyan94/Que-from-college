
/* WAP to follow Series....
                          1,4,9,16,25.....n terms  */

#include <stdio.h>
#include <conio.h>

int main()
{
    int i,n,s;
    printf("\n Enter a number = ");
    scanf("%d",&n);

     printf("Series: ");
    for ( i = 1; i <=n ; i++)
    {
        s=i*i; 
        printf("%d , ",s);
    }    
}