//                      structure
// Write a program to input house no. city name and pincode of 5 persons and display these values using structure
#include<stdio.h>
#include<conio.h>
struct city
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
    printf("Enter City Name: ");
    scanf("%s",&e[i].name);
    printf("Enter City Pincode: ");
    scanf("%d",&e[i].code);
   }
   printf("\nHouse Number | City Name | City Pincode ");
   for (int i = 0; i < 5; i++)
   {
    printf("\n %d",e[i].house);
    printf("\t\t%s",e[i].name);
    printf("\t\t%d",e[i].code);
   }
}

/*~~~Output
Enter 1 House Number: 75
Enter City Name: Jhansi
Enter City Pincode: 284003
Enter 2 House Number: 161
Enter City Name: Lalitpur
Enter City Pincode: 284403

and so on .....................................

House Number | City Name | City Pincode
 75               Jhansi         284003
 161              Lalitpur       284403
 
 and so on ....................................
*/