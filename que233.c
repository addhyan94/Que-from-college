//                      2-D Array 
/* WAP to input a matrix of order 3x3 and print elements of main diagonals in matrix form.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int array[3][3];
     for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        printf("INDEX => Row: %d || Colum: %d || Enter Elements :  ",i,j);
        scanf("%d",&array[i][j]);
    }
    }
    printf(" Main diagonals in matrix form :: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i==j)
            printf("%d",array[i][j]);
            else
            printf(" ");
        }
        printf("\n");
    }
}

/*~~~Output 
INDEX => Row: 0 || Colum: 0 || Enter Elements :  1
INDEX => Row: 0 || Colum: 1 || Enter Elements :  2
INDEX => Row: 0 || Colum: 2 || Enter Elements :  3
INDEX => Row: 1 || Colum: 0 || Enter Elements :  4
INDEX => Row: 1 || Colum: 1 || Enter Elements :  5
INDEX => Row: 1 || Colum: 2 || Enter Elements :  6
INDEX => Row: 2 || Colum: 0 || Enter Elements :  7
INDEX => Row: 2 || Colum: 1 || Enter Elements :  8
INDEX => Row: 2 || Colum: 2 || Enter Elements :  9
 Main diagonals in matrix form ::
1
 5
  9

*/