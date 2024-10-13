/* WAP to folloe Series....
                            2,6,12,24....n terms .*/

#include <stdio.h>
#include<conio.h>

int main()
 {
    int i, n,s;
    s=2;
    
    printf("\n Enter the number= ");
    scanf("%d", &n);

    printf("Series: ");
    for (i = 1; i <= n; i++) 
    {
        printf("%d, ", s);
        if (i % 2 > 0) 
        {
            s = s * 3; // '2'  ke baad seedhe '6' hai isliye '3' se multiply kiya ..
        } 
        else
         {
            s = s * 2; 
        }
    }
}
