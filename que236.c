//                      2-D Array 
/*WAP to input a matrix of order 3x2, print it, and calculate the product of each column individually. */

#include<stdio.h>
#include<conio.h>
int main()
{
    int array[3][2],product;
      for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 2; j++)
    {
        printf("INDEX => Row: %d || column: %d || Enter Elements :  ",i,j);
        scanf("%d",&array[i][j]);
    }
    }
    for (int j = 0; j < 2; j++)
    {
        product=1;
        for (int i = 0; i < 3; i++)
        {
            product = product *array[i][j];
        }
    printf("\n Product of column %d :: %d",j,product);
    }
}

/*~~~Output 
INDEX => Row: 0 || column: 0 || Enter Elements :  1
INDEX => Row: 0 || column: 1 || Enter Elements :  2
INDEX => Row: 1 || column: 0 || Enter Elements :  3
INDEX => Row: 1 || column: 1 || Enter Elements :  4
INDEX => Row: 2 || column: 0 || Enter Elements :  5
INDEX => Row: 2 || column: 1 || Enter Elements :  6

 Product of  column 0 :: 15
 Product of  column 1 :: 48

*/