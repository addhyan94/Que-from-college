/*WAP to follow Series ....
         1,2,3,4,5.........n terms.*/

#include <stdio.h>
#include<conio.h> 

int main() 
{
    int n;
   
    printf("/n Enter the number of terms: ");
    scanf("%d", &n);
    printf("Series: ");
    for (int i = 1; i <= n; i++)
 {
        printf("%d , ", i);
    }
    
}