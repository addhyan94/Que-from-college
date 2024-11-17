//                              usning Arrays 
/* WAP to input 2 array of same size and check equality array in another array.*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int array1[5], array2[5], i, j, k;
        printf("Enter the first array numbers: ");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &array1[i]);
    }
        printf("Enter the second array numbers: ");
    for (j = 0; j <= 4; j++)
    {
        scanf("%d", &array2[j]);
    }
    for (k = 0; k <= 4; k++)
    {
        if (array1[k] != array2[k])
        {
            printf("Firsst and second array is not equal...");
            break;
        }
    }
    if (k == 5)
    {
        printf("Firsst and second array is equal...");
    }
}