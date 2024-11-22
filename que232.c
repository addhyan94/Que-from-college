//                      2-D Array 
/*WAP to input a matrix of order 2x3 and calculate sum of all elements. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int array[2][3],s=0;
    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        printf("INDEX => Row: %d || Colum: %d || Enter Elements :  ",i,j);
        scanf("%d",&array[i][j]);
    }
    }
    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 3; j++)
    {
       s = s + array[i][j];
    }
    }
    printf("\n Sum of matrix of order 2X3 : %d ",s);
}

/*~~output 
INDEX => Row: 0 || Colum: 0 || Enter Elements :  1
INDEX => Row: 0 || Colum: 1 || Enter Elements :  1
INDEX => Row: 0 || Colum: 2 || Enter Elements :  1
INDEX => Row: 1 || Colum: 0 || Enter Elements :  1
INDEX => Row: 1 || Colum: 1 || Enter Elements :  1
INDEX => Row: 1 || Colum: 2 || Enter Elements :  1
INDEX => Row: 2 || Colum: 0 || Enter Elements :  1
INDEX => Row: 2 || Colum: 1 || Enter Elements :  1
INDEX => Row: 2 || Colum: 2 || Enter Elements :  2

 Sum of matrix of order 2X3 : 11
*/