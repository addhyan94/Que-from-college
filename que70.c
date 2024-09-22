#include <stdio.h>
#include <conio.h>

int main()
{
    int a,ch;
    float b,c;
    printf("\n choice one case ");
    printf("\n case  1 \n case 2 ");
    printf("\n Enter your case =");
    scanf("%d",&ch);
    printf("\n Enter a number = ");
    scanf("%d",&a);
    switch (ch)
    {
    case 1:
        b=a*a*(20.0/100.0);
        printf("\n the value of B= %f",b);
        break;
    case 2:
    c=a*(60.0/100.0);
    printf("\n the value of B= %f",b);
        break;
    
    default:
        printf("\n ERROR :: Your choice is wrong ");
    }
    return 0;
}