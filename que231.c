#include<stdio.h>
// #include<conio.h>
int main()
{
    int array[3][3];
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("\n %d row , %d colom : Ennter elements for 2d array: ",j ,i );
            scanf("%d",&array[j][i]);
            printf("ho gaya fill ");
        }
    }  
    printf("matrix form ::::\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\t%d ",array[i][j]);
        }
        printf("\n");
    }
    
}