//                              usning Arrays 
/* WAP to iput 5 elements into an arrays and print only Buzz number . */

#include<stdio.h>
#include<conio.h>
int main()
{
int array[5];
printf("Enter a number: ");
for (int i = 0; i <5; i++)
{
    scanf("%d",&array[i]);
}
for (int j = 0; j <5 ; j++)
{
if (array[j]%7==0||array[j]%10==7)
{
    printf("\n %d is only Buzz Number ",array[j]);
}
}
}