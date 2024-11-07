/*WAP to input a number and check weather it is factor or not */

#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("\n Enter a number = ");
    scanf("%d",&a);
    if (20%a==0)
    {
        printf("\n %d is a factor of 20",a);
    }
    else
    {
        printf("\n %d is not a factor of 20",a);
    }
    
    return 0;
}