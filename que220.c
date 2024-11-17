//                              usning Arrays 
/*WAP to input two array of same size or different size merge these two array in third array*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int array1[5], array2[6], i, j, k, l, m;
        printf("\n Enter the first array number: ");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &array1[i]);
    }
        printf("Enter the second array number: ");
    for (j = 0; j <= 5; j++)
    {
        scanf("%d", &array2[j]);
    }
    printf("\nMerge first array and second array in third array: ");
    int array3[11];
    for (k = 0; k <= 4; k++)
    {
        array3[k] = array1[k];
    }
    for (l = 0; l <= 5; l++)
    {
        array3[k + l] = array2[l];
    }
    for (m = 0; m <= 10; m++)
    {
        printf("\n Third array index : %d , Third array value : %d ",m,array3[m]);
    }
}