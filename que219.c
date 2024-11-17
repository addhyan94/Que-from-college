//                              usning Arrays 
/*WAP to input 5 elements into an array and swap and swap first element with last element,second element with second last and so on..*/
#include<stdio.h>
#include<conio.h>
int main()
{
     int array[5];
     printf("\n enter a number: ");
     for (int i = 0; i <=4 ; i++)
     {
        scanf("%d",&array[i]);
     }
     printf("\n \t Before swapping: \n");
     for (int i = 0; i <=4; i++)
     {
      printf("\n Index = %d , Elements = %d  ",i,array[i]);
     }
     int temp;
     for (int i = 0; i <=2; i++)
     {
        temp=array[i];
       array[i]=array[4-i];
       array[4-i]=temp;
     }
     printf("\n \n\t After swapping : \n");
      for (int i = 0; i <=4; i++)
     {
      printf("\n Index = %d , Elements = %d  ",i,array[i]);
     }
}