//                              usning Arrays With Functions 

/*WAP to input 5 elements into an array and print Total Number of Factors of each elements using function */

#include<stdio.h>
#include<conio.h>
int calculate(int);
int main()
{
    int array[5],k;
    for (int i = 0; i <5; i++)
    {
        printf("%d : Index me Your Number: ",i);
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        k=calculate(array[i]);
        printf("\n %d : Index || NUmber is : %d || Total Number of Factors: %d ",i,array[i],k);
    }
    
}
int calculate(int x)
{
    int c = 0;
    for (int i = 1; i <= x; i++)
     {
        if (x % i == 0)
         {
            c++;
        }
    }
    return(c);
}

/*~~~ Output 
0 : Index me Your Number: 12
1 : Index me Your Number: 13
2 : Index me Your Number: 2
3 : Index me Your Number: 4
4 : Index me Your Number: 5

0 : Index me || Number: 12 || Total Number of Factors: 6
1 : Index me || Number: 13 || Total Number of Factors: 2
2 : Index me || Number: 2  || Total Number of Factors: 2
3 : Index me || Number: 4  || Total Number of Factors: 3
4 : Index me || Number: 5  || Total Number of Factors: 2

*/