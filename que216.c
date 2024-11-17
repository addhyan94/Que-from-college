//                              usning Arrays 
/* WAP to input  5 elemets into an array and print largest and smallest elements of array*/
#include <stdio.h>
#include <conio.h>
int  main()
{
    int i, j, array[5], max, min;
        printf("Enter a number for array: ");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &array[i]);
    }
    max = array[0];
    min = array[0];
    for (j = 0; j <= 4; j++)
    {
        if (array[j]> max)
        {
            max=array[j];
        }
        if (array[j]<min)
        {
            min=array[j];
        }
    }
    printf("max number  = %d\n min number = %d",max,min);
}