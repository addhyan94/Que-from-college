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