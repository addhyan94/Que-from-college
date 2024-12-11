//              union
// Write a program to input house no. city name and pincode of 5 persons and display these values using sunion. 
#include<stdio.h>
#include<conio.h>
union city
{
    int house;
    char name[50];
    int code;
} e[5];

void main()
{
   for (int i = 0; i < 5; i++)
   {
    printf("Enter %d House Number: ",i+1);
    scanf("%d",&e[i].house);
    printf("\nHouse Number %d",e[i].house);
    printf("Enter City Name: ");
    scanf("%s",&e[i].name);
    printf("\nCity Name %s",e[i].name);
    printf("Enter City Pincode: ");
    scanf("%d",&e[i].code);
    printf("\n City Pincode%d",e[i].code);
   }
}
