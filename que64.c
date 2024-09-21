#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int ar,pari,a,b,ch;
    printf("\n Choice one case ");
    printf("\n case 1 calculate area of rectangle \n case 2 calulaate primiter of rectangle ");
    printf("\n Enter your choice = ");
    scanf("%d",&ch);
    printf("\n Enter a length= ");
    scanf("%d",&a);
    printf("\n Enter a brigth =");
    scanf("%d",&b);
    switch (ch)
    {
    case 1:
    ar=a*b;
        printf("\n %d is area of a rectangle ");

                break;
                case 2:
                pari=2*(a+b);
                printf("\n %d is a perimeter of a rectangle ");
                break;
    
    default:
       printf("\n ERROR :: your choice is Wrong");

}
   return 0;
}