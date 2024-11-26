//                      2-D Array 
/* WAP to input two matrix of order 3x3 amd calculate product of these matrix. */

#include<stdio.h>
#include<conio.h>
int main()
{
    int array1[3][3],array2[3][3],array3[3][3];
      for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        printf("INDEX => Row: %d || Colum: %d || Enter Elements Array 1 :  ",i,j);
        scanf("%d",&array1[i][j]);
    }
    }
     for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        printf("INDEX => Row: %d || Colum: %d || Enter Elements Array 2 :  ",i,j);
        scanf("%d",&array2[i][j]);
    }
    }
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
        array3[i][j]=0;
        for (int k = 0; k < 3; k++)
        {
           array3[i][j]=array3[i][j]+array1[i][j]*array2[k][j];
        }
       }
    }
    printf("\nproduct of array1 and array2:\n");
    for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
         {
            printf("%d ", array3[i][j]);
        }
        printf("\n");
    }
}
