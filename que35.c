#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("\n enter a number =");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("\n The number %d is Even",a);
    }
    else 
    {
        printf("\n The number %d is Odd ",a);
    }
    return 0;
}