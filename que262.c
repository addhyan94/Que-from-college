//              union
// WAP to input Name , AGE , Percentage of  students and dislay with perper Msg using union. 
#include<stdio.h>
#include<conio.h>
union student
{
    char name[50];
    int age;
    float per;
}a[5];
void main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d Student Name: ",i+1);
        scanf("%s",&a[i].name);
        printf(" Student Name: %s\n",a[i].name);
        printf("Enter %d Student Age: ",i+1);
        scanf("%d",&a[i].age);
        printf("Age: %d\n", a[i].age);
        printf("Enter %d Student Percentage: ",i+1);
        scanf("%f",&a[i].per);
        printf("Percentage: %.2f\n", a[i].per);
    }
}
