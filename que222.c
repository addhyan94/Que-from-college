//                              usning Arrays With Functions 

/*WAP to input 5 Elements into an array and print sum of digits of each elemtnts using functions. */

#include<stdio.h>
#include<conio.h>

int check(int);
int main()
{
    int array[5],k;
    for (int  i = 0; i <5; i++)
    {
        printf("%d : index me number : ",i);
        scanf("%d",&array[i]);
    }
    for (int i = 0; i <5; i++)
    {
        k=check(array[i]);
        printf("\n %d : Index me || Number  : %d || Sum of Digit : %d", i, array[i], k);
    }
    
}

int check(int x)
{
    int r,sum=0;
        for (int i = x; i > 0; i = i / 10)
    {
        r = i % 10;
           sum=sum+r;
    }
    return(sum);
}

/*~~ Output 

0 : index me number : 12
1 : index me number : 13
2 : index me number : 14
3 : index me number : 15
4 : index me number : 16

 0 : Index me || Number  : 12 || Sum of Digit : 3
 1 : Index me || Number  : 13 || Sum of Digit : 4
 2 : Index me || Number  : 14 || Sum of Digit : 5
 3 : Index me || Number  : 15 || Sum of Digit : 6
 4 : Index me || Number  : 16 || Sum of Digit : 7
 
 */