//                              usning Arrays With Functions 

/* WAP to input 5 Elements into an array calculate Factorial value of each elements using Function */

#include<stdio.h>
#include<conio.h>

int check(int);
int main()
{
    int array[5],k;
    for (int i = 0; i <5; i++)
    {
    printf(" %d Index me number: ",i);
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        k=check(array[i]);
         printf("\n %d : Index me || fact value : %d  ",i,k);
    }
    
}

int check(int x)
{
    int fact=1;
    for (int i = 1; i <=x; i++)
    {
        fact = fact * i;
    }
    return (fact);
}

/*~~~ Output 
 0 Index me number: 2
 1 Index me number: 5
 2 Index me number: 6
 3 Index me number: 1
 4 Index me number: 0

 0 : Index me || fact value : 2
 1 : Index me || fact value : 120
 2 : Index me || fact value : 720
 3 : Index me || fact value : 1
 4 : Index me || fact value : 1
 
 */