//                              structure
// WAP to input one integer , one Decimal , one Charater values using structure
#include<stdio.h>
#include<conio.h>
struct Data_types
{
    int integer;
    float decimal;
    char charater;
} a;
void main()
{
printf("Enter a integer number : ");
scanf("%d",&a.integer);
printf("Enter a Decimal number : ");
scanf("%f",&a.decimal);
printf("Enter a Charater: ");
scanf("%c",&a.charater);
printf("\n %d Is a Integer Value ",a.integer);
printf("\n %.2f Is a Decimal Value ",a.decimal);
printf("\n %c Is a charater Value ",a.charater);
}

/*~~~Output 
Enter a integer number : 25
Enter a Decimal number : 16
Enter a Charater: A
 25 Is a Integer Value 
 16.00 Is a Decimal Value 
 A Is a charater Value 

*/