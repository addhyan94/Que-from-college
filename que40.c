/* WAP to input a number and check weather it is buzz number or not a number is called buzz 
if it is multiply of 7 or leaces reminder 7 when divided by 10 */

#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("\n Enter  a number = ");
    scanf("%d",&a);
    if (a%7==0||a%10==7)
    {
        printf("\n The Number is buzz number ");
    }
    else
    {
        printf("\n The Number is not buzz number ");
    }
    
    return 0;
}