/* WAP to print first n odd number .*/

#include <stdio.h>
#include<conio.h>

int main() 
{
    int i,a ,n ;  
        a=1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) 
    {
        a= a+2; 
        printf("\n %d", a);
    }
    
    return 0;
}