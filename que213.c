//                              usning Arrays 
/* WAP to iput 5 elements into an arrays and calculate product of even elements. */

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
int pro=1;
int en;
    for (int i = 0; i < 5; i++) {
        printf("At index %d, element = %d\n", i, array[i]);
        if (array[i] % 2 == 0)
         {
            pro = pro * array[i];
             en = 1;
        }
    }
        printf("\nProduct of even elements: %d\n",pro);
}