#include <stdio.h>
#include <conio.h>

int main()
{
    int number;
    printf("\n Enter a number =");
    scanf("%d",&number);
    if (number>10&&number <=20)
    {
        printf("\n The number %d is more then 10 and less then or equal to 20",number);
    }
    else 
    {
        printf("\n The number %d does not meet the condition",number);
    }
    return 0;
}