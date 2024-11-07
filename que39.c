/* WAP to input a number and check it is buzz number or not */

#include <stdio.h>
#include <conio.h>

int main()
{
    int a ;
    printf("\n enter a number = ");
    scanf("%d",&a);
    if (a%7==0||a%10==7)
    {
        printf("\n The Number is buzz number ");
    }
    else
    {
        printf("\n The Number is not  buzz number ");
    }
    
    
    return 0;
}