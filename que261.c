//              union
// WAP to input one integer , one Decimal , one Charater values using union.
#include<stdio.h>
#include<conio.h>
union numbers
{
    int p;
    float o;
    char t;
}a;
void main()
{
    printf(" Enter First number:");
    scanf("%d",&a.p);
    printf("Enter second number: ");
    scanf("%f",&a.o);
    printf("Enter Charater: ");
    scanf(" %c", &a.t);
    printf("\n %d Is a interger Value",a.p);
    printf("\n %f Is a Decimal Value",a.o);
    printf("\n %c Is a Charater Value ",a.t);
}

/*~~Output 


*/