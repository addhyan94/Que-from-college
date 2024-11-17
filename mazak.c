//   Isme aapane 2 program bane hue hai ek hai patterns bala or array bala okee ...

//                                      ~~ Patterns ~~
/*#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,k;
    for ( i = 1; i <=9; i++)
    {
        if(i<=5)
        {
        for(k=1;k<=(5-i);k++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        }
        else
        {
        for(k=1;k<=(5-i);k++)
        {
            printf(" ");
        }
        for(j=(10-i);j>=1;j--)
        {
            printf("*");
        }
        }
        printf("\n");
    }
    
}*/

// Using array for swapping numbers 

/*#include<stdio.h>
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
}*/