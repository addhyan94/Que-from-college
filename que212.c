//                              usning Arrays 
/* WAP to iput 5 elements into an arrays calculate sum of all elements .  */

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
    int sum=0;
for (int j = 0; j <5 ; j++)
{
    sum=sum+array[j];
}
printf("\n Sum of all elements= %d",sum);
}