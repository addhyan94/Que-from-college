#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,ch;
    printf("\n\t ~~~ Choice One Case ~~~~");
    printf("\n Casse 1 for check number is Even and odd  \n Case 2 for check number is Buzz or not ");
    printf("\n Enter Choice = ");
    scanf("%d",&ch);
    printf("\n Enter first number =");
    scanf("%d",&a);
   // printf("\n Enter second number = ");
   // scanf("%d",&b);
    switch (ch)
    {
    case 1:
     if (a%2==0)
    {
        printf("\n The number %d is Even",a);
    }
    else 
    {
        printf("\n The number %d is Odd ",a);
    }
        break;
    case 2:
    if (a % 7 == 0 || a % 10 == 7)
     {
        printf("\n %d is a Buzz Number.",a);
    } else
     {
        printf("\n %d is not a Buzz Number.",a);
    }

    break;
    default:
        printf("\n ERROR :: Your choice is Wrong ...");
    }
    return 0;
}