
/* WAP to folloe Series....
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
    for (i = 1; i <= n; i++) 
    {
        k=s;
        printf("%d, ", s);
        s=s*2;
    }
}