// Wap to input a matrix of order 3x3 abd print in matrix form. 

#include<stdio.h>
#include<conio.h>
int main()
{
    int array[3][3];
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("\n %d Row , %d Column : Enter Elements ->  ",j ,i );
            scanf("%d",&array[j][i]);
        }
    }  
    printf("matrix form ::::\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
   
}