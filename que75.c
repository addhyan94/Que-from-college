/* WAP to print first five odd number .*/

#include <stdio.h>
#include<conio.h>

int main() 
{
    int i,a;  
        a=1;
    for(i = 1; i <= 5; i++) 
    {
        a= a+2; 
        printf("\n %d", a);
    }
    
    return 0;
}