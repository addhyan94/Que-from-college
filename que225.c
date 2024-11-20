//                              usning Arrays With Functions 

/*WAP to input 5 elements into an array and print only perfect elements of array using function. */

#include<stdio.h>
#include<conio.h>
int calculate(int);
int main()
{
    int array[5],k;
    for (int i = 0; i < 5; i++)
    {
        printf("%d : Index me Your number :  ",i);
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        k=calculate(array[i]);
        if (k==1)
        {
    printf("\n Only Perfect number is : %d",array[i]);
        }
    }
}

int calculate(int x)
{
        int sum = 0;
    for (int i = 1; i <= x / 2; i++)
     {
        if (x % i == 0)
         {
            sum = sum + i;
        }
    }
   if (sum == x)
    {
    return 1;
    } 
    return 0;
}

/*~~ Output 

0 : Index me Your number :  2
1 : Index me Your number :  456
2 : Index me Your number :  496
3 : Index me Your number :  28
4 : Index me Your number :  13

 Only Perfect number is : 496
 Only Perfect number is : 28
 
 */