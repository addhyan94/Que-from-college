//                      2-D Array 
/*WAP to input a matrix of order 3x3 and calculate the sum of elements of both diagonals.*/

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
    printf("\n Sum of Both Diagonal elements::");
    int s=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            s = s + array[i][j];
        }
    }
    printf("%d",s);
}