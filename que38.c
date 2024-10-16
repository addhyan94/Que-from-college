/* WAP to input a number and check weather it  is leaves remender 5 when devided by 9 or leaves remender 3 when devided by 8 */

#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("\n enter a number =");
    scanf("%d",&a);
    if (a%9==5)
    {
        printf("\n The number leaves a remender of 5 when devided by 9 ");

        }
    else if (a%8==3)
    {
        printf("\n The number leaves a remender of 3 ehen decided by 8 ");
    }
    else
    {
        printf("\n The number does not satisfy any of the condittions ");
    }
    
    
    return 0;
}