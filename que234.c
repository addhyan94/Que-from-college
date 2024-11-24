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

/*~~Output 
INDEX => Row: 0 || Colum: 0 || Enter Elements :  1
INDEX => Row: 0 || Colum: 1 || Enter Elements :  2
INDEX => Row: 0 || Colum: 2 || Enter Elements :  3
INDEX => Row: 1 || Colum: 0 || Enter Elements :  4
INDEX => Row: 1 || Colum: 1 || Enter Elements :  5
INDEX => Row: 1 || Colum: 2 || Enter Elements :  6
INDEX => Row: 2 || Colum: 0 || Enter Elements :  7
INDEX => Row: 2 || Colum: 1 || Enter Elements :  8
INDEX => Row: 2 || Colum: 2 || Enter Elements :  9

 Sum of Both Diagonal elements::45

*/