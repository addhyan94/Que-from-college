//                                 usning Arrays 

/* WAP to input 5 elements into an array and input a number check this number is exist in this array or not.*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int array[5];
        printf("Enter a number for array: ");
    for (int i = 0; i <5; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter a number to check: ");
    int n,j;
        scanf("%d", &n);
    for ( j = 0; j <5; j++)
    {
        if (n == array[j])
        {
            printf("%d is exist in array ",n);
            break;
        }
    }
    if (j == 5)
    {
        printf("%d is not exist in array ",n);
    }
}