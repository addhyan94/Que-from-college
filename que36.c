/* WAP to input a number and check it is multiply of 6 or not */
#include <stdio.h>
#include <conio.h>

int main()
{
    int number ;
    printf("\n Enter a number = ");
    scanf("%d",&number);
    if (number%6==0)
    {
        printf("\n %d is multiply of 6",number);
    }
    else
    {
         printf("\n %d is not  multiply of 6",number);
    }
    return 0;
}