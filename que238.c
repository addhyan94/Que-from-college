//                      2-D Array 
/* WAP to input 2 matrices of order 3x3 and calculate sum of these matrices. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int array1[3][3], array2[3][3], sum[3][3];
    printf("Enter elements of array1 :\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("array1 INDEX => Row: %d || Column: %d || Enter Element: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }
    printf("\nEnter elements of array2 :\n");
    for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++) 
        {
            printf("array2 INDEX => Row: %d || Column: %d || Enter Element: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
         {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }
    printf("\nSum of array1 and array2:\n");
    for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
         {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
