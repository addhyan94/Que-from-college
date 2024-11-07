
#include <stdio.h>
#include<conio.h>
int main()
{
    int a, b, c;

 
    printf("\n Enter the length of side a: ");
    scanf("%d", &a);
    printf("\n Enter the length of side b: ");
    scanf("%d", &b);
    printf("\n Enter the length of side c: ");
    scanf("%d", &c);

 
    if ((a + b > c) && (b + c > a) && (c + a > b))
    {
        printf("\n Triangle formation is possible");

       
        if (a == b && b == c)
        {
            printf("\n It is an Equilateral Triangle.");
        }
        
        else if (a == b || b == c || c == a)
        {
            printf("\n It is an Isosceles Triangle.");
        }
        // If no sides are equal, it is a Scalene Triangle
        else
        {
            printf("\n It is a Scalene Triangle.");
        }
    }
    else
    {
        printf("\n Triangle formation is not possible.");
    }

    return 0;
}
