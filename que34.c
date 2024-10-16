#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("\n Enter a number =");
    scanf("%d",&a);
    if (a>50||a<10)
    {
        printf("\n The number %d is greater then 50 and less then 10 ",a);
    }
    else 
    {

        printf("\n The number %d is not grater then 52 and less  then 10",a);
    }
    return 0;
}