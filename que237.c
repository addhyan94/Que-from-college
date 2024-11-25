//                      2-D Array 
/* WAP to input a matrix of order 2x3 and print transpose of this matrix . */

#include<stdio.h>
#include<conio.h>
int main()
{
    int array[2][3],trans[3][2];
      for (int i = 0; i < 2; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        printf("INDEX => Row: %d || Colum: %d || Enter Elements :  ",i,j);
        scanf("%d",&array[i][j]);
    }
    }
     printf(" Before Transpose \n");
    for (int i = 0; i < 2; i++)
    {
        for (int  j= 0; j < 3; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            trans[j][i] = array[i][j];
        }
    }
     printf(" After Transpose \n");
    for (int i = 0; i < 3; i++)
    {
        for (int  j= 0; j < 2; j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    
}

/*~~Output 
INDEX => Row: 0 || Colum: 0 || Enter Elements :  1
INDEX => Row: 0 || Colum: 1 || Enter Elements :  2
INDEX => Row: 0 || Colum: 2 || Enter Elements :  3
INDEX => Row: 1 || Colum: 0 || Enter Elements :  4
INDEX => Row: 1 || Colum: 1 || Enter Elements :  5
INDEX => Row: 1 || Colum: 2 || Enter Elements :  6
 
 Before Transpose
        1 2 3
        4 5 6

 After Transpose
        1 4
        2 5 
        3 6 

*/