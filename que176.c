//                                 ~~ Series using Do-While Loop  
/* WAP to follow Series....
                            3,6,12,24....n terms .*/

#include <stdio.h>
#include<conio.h>

int main()
 {
    int i, n,s,k;
    s=3;
    
    printf("\n Enter the number= ");
    scanf("%d", &n);

    printf("Series: ");
    i = 1;
    while ( i <= n) 
    {
        k=s;
        printf("%d, ", s);
        s=s*2;
         i++;
    }
}