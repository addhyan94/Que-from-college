#include <stdio.h>
#include<conio.h>
int main()
{
    int a, b, c, max, x, y;

    printf("\n Enter the length of side a: ");
    scanf("%d", &a);
    printf("\n Enter the length of side b: ");
    scanf("%d", &b);
    printf("\n Enter the length of side c: ");
    scanf("%d", &c);

    if ((a + b > c) && (b + c > a) && (c + a > b))
    {
        printf("\n Triangle formation is possible.");

        if (a > b && a > c)
         {
            max = a;
            x = b;
            y = c;
        }
        else if (b > a && b > c) 
        {
            max = b;
            x = a;
            y = c;
        }
        else
         {
            max = c;
            x = a;
            y = b;
        }

        if (max * max == (x * x + y * y))
        {
            printf("\n It is a Right-Angled Triangle.");
        }
        else
        {
            printf("\n It is not a Right-Angled Triangle.");
        }
    }
    else
    {
        printf("\n Triangle formation is not possible.");
    }

    return 0;
}
