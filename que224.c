//                              usning Arrays With Functions 

/*WAP to input 5 Elements into an array and print only prinme elements of array using function .*/

#include<stdio.h>
#include<conio.h>
int prime(int);
int main()
{
    int array[5],k;
    for (int  i = 0; i < 5; i++)
    {
        printf("%d : Index me Your number :  ",i);
        scanf("%d",&array[i]);
    }
    for (int i = 0; i <5; i++)
    {
        k=prime(array[i]);
        if (k>0)
        {
    printf("\n Only Prime number is : %d",array[i] );   
        }
    }
}

int prime(int x)
{
        if (x < 2)
        {
        return 0;
        }
    int f=0;
        for (int i = 1; i <= x; i++)
     {
        if (x % i == 0) 
        {
            f++; 
        }
    }
    if (f == 2) 
    {
    return(x);
    } 
}

/*~~ Output 

0 : Index me Your number :  12
1 : Index me Your number :  14
2 : Index me Your number :  1
3 : Index me Your number :  5
4 : Index me Your number :  6

 Only Prime number is : 12
 Only Prime number is : 14
 Only Prime number is : 5
 Only Prime number is : 6
 
 */