#include <stdio.h>
#include <conio.h>

int main()
{
    int ch,a,ar,pr;
    printf("\n Enter 1 for area \n Enter 2 for perimater ");
    printf("\n Enter your choice = ");
    scanf("%d",&ch);
    printf("\n Enter side of square=");
    scanf("%d",&a);
    switch (ch)
    {
    case 1:
        ar=a*a;
        printf("\n area=%d",ar);
        break;
        case 2:
       pr=4*a;
       printf("\n perimater=%d ",pr);
       break; 
    
    default:
       printf("\n ERROR :: Your choice is Wrong ");
    }

}