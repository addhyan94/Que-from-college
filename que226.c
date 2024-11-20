//                              usning Arrays With Functions 

/*WAP to input 5 elements into an array and print only special number of array using function */

#include<stdio.h>
#include<conio.h>
int check(int);
int main()
{
    int array[5],k;
    for (int i = 0; i < 5; i++)
    {
        printf("%d : Index me Your Number: ",i);
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        k=check(array[i]);
        if (k==array[i])
        {
    printf("\n Only special number is : %d",array[i]);
        }
    }
}
    
int check(int x)
{
   int temp, fact, sum = 0, digit;
    temp = x;
    while (temp > 0) 
    {
        digit = temp % 10;
        fact = 1;
        for (int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    return sum;
}

/*~~Output 

0 : Index me Your Number: 1
1 : Index me Your Number: 2
2 : Index me Your Number: 6
3 : Index me Your Number: 145
4 : Index me Your Number: 88

 Only special number is : 1
 Only special number is : 2
 Only special number is : 145
 
 */