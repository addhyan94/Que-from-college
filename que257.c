//                      structure
// WAP to input Name , AGE , Percentage of  students and dislay with perper Msg using structure.
#include<stdio.h>
#include<conio.h>
struct class
{
    char name[50];
    int age;
    float pre;
}a[5];
void main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d Student Name : ",i+1);
        scanf("%s",&a[i].name);
        printf("Enter %d Student AGE : ",i+1);
        scanf("%d",&a[i].age);
        printf("Enter %d Student Percentage : ",i+1);
        scanf("%f",&a[i].pre);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n %d Student Name is = %s",i+1,a[i].name);
        printf("\n %d Student AGE is = %d",i+1,a[i].age);
        printf("\n %d Student Percentage is = %.2f",i+1,a[i].pre); 
    }
}