//                              usning Arrays 
/* WAP to iput 5 elements into an arrays and print all the elements in different line with its index value for ex= at index  0 element=15 and so on */

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
printf("At index %d, element = %d\n", j, array[j]);
}
}