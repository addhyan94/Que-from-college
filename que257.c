//                      structure
// WAP to input Name , AGE , Percentage of  students and dislay with perper Msg using structure.
#include<stdio.h>
#include<conio.h>
struct marksheet
{
    int age;
    float per;
    char name[50];
} a[5];
void main()
{
    for (int i = 1; i < 6; i++)
    {
     printf("\n--- Enter Details of Student ( %d ) ---\n", i);
    printf("\n Student Name : ");
    scanf("%s",&a[i].name);
    printf(" Student AGE: ");
    scanf("%d",&a[i].age);
    printf(" Student Percentage: ");
    scanf("%f",&a[i].per);
    }
    for (int i = 1; i < 6; i++)
    {
    printf("\n--- Details of Student %d ---\n", i);
        printf("Name: %s\n", a[i].name);
        printf("Age: %d\n", a[i].age);
        printf("Percentage: %.2f", a[i].per);
        printf("\n");
    }
}

/*~~~~Output 
--- Enter Details of Student ( 1 ) ---

 Student Name : Addhyan
 Student AGE: 18  
 Student Percentage: 65

--- Enter Details of Student ( 2 ) ---


 Student Name : Raju
 Student AGE: 19
 Student Percentage: 98

 and so on .................

 --- Details of Student 1 ---
Name: Addhyan
Age: 18
Percentage: 65.00

--- Details of Student 2 ---
Name: Raju
Age: 19
Percentage: 98.00

and so on .............

*/