//                      2-D Array 
/* WAP to input a matrix of order 3x4, calculate and print the sum of each row individually. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int array[3][4],sum;
    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 4; j++)
    {
        printf("INDEX => Row: %d || Colum: %d || Enter Elements :  ",i,j);
        scanf("%d",&array[i][j]);
    }
    }    
    for (int i = 0; i < 3; i++)
    {
        sum=0;
        for (int j = 0; j < 4; j++)
        {
            sum = sum + array[i][j];
        }
    printf("\n sum of %d row individually : %d",i,sum);
    }
}

/*~~~Output 
INDEX => Row: 0 || Colum: 0 || Enter Elements :  1
INDEX => Row: 0 || Colum: 1 || Enter Elements :  2
INDEX => Row: 0 || Colum: 2 || Enter Elements :  3
INDEX => Row: 0 || Colum: 3 || Enter Elements :  4
INDEX => Row: 1 || Colum: 0 || Enter Elements :  5
INDEX => Row: 1 || Colum: 1 || Enter Elements :  6
INDEX => Row: 1 || Colum: 2 || Enter Elements :  7
INDEX => Row: 1 || Colum: 3 || Enter Elements :  8
INDEX => Row: 2 || Colum: 0 || Enter Elements :  9
INDEX => Row: 2 || Colum: 1 || Enter Elements :  10
INDEX => Row: 2 || Colum: 2 || Enter Elements :  11
INDEX => Row: 2 || Colum: 3 || Enter Elements :  12

 sum of 0 row individually : 10
 sum of 1 row individually : 26
 sum of 2 row individually : 42
*/