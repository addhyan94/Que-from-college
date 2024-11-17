//                              usning Arrays 
/*WAP to input  2 array of same size and calculate sum of these array in another array.*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int array1[5], array2[5], sum[5], i, j, k, l;
        printf("Enter the first arrays number: ");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &array1[i]);
    }
        printf("Enter the second arrays number: ");
    for (j = 0; j <= 4; j++)
    {
        scanf("%d", &array2[j]);
    }
    for (k = 0; k <= 4; k++)
    {
        sum[k] = array1[k] + array2[k];
    }
    for (l = 0; l <= 4; l++)
    {
        printf("%d ", sum[l]);
    }
}