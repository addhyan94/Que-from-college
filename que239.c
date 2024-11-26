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
    printf("...............................................\n");
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

/*~~Output-
INDEX => Row: 0 || Colum: 0 || Enter Elements Array 1 :  1
INDEX => Row: 0 || Colum: 1 || Enter Elements Array 1 :  2
INDEX => Row: 0 || Colum: 2 || Enter Elements Array 1 :  3
INDEX => Row: 1 || Colum: 0 || Enter Elements Array 1 :  4
INDEX => Row: 1 || Colum: 1 || Enter Elements Array 1 :  5
INDEX => Row: 1 || Colum: 2 || Enter Elements Array 1 :  6
INDEX => Row: 2 || Colum: 0 || Enter Elements Array 1 :  7
INDEX => Row: 2 || Colum: 1 || Enter Elements Array 1 :  8
INDEX => Row: 2 || Colum: 2 || Enter Elements Array 1 :  9
...............................................
INDEX => Row: 0 || Colum: 0 || Enter Elements Array 2 :  9
INDEX => Row: 0 || Colum: 1 || Enter Elements Array 2 :  8
INDEX => Row: 0 || Colum: 2 || Enter Elements Array 2 :  7
INDEX => Row: 1 || Colum: 0 || Enter Elements Array 2 :  6
INDEX => Row: 1 || Colum: 1 || Enter Elements Array 2 :  5
INDEX => Row: 1 || Colum: 2 || Enter Elements Array 2 :  4
INDEX => Row: 2 || Colum: 0 || Enter Elements Array 2 :  3
INDEX => Row: 2 || Colum: 1 || Enter Elements Array 2 :  2
INDEX => Row: 2 || Colum: 2 || Enter Elements Array 2 :  1

product of array1 and array2:
18 30 36
72 75 72
126 120 108

*/