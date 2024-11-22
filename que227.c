//                              usning Arrays With Functions 

/*WAP to input 5 elements into an array and print only armstrong elements of array using function. */
#include<stdio.h>
#include<conio.h>
#include<math.h>

int check(int);
int main()
{
    int array[5],k;
      for (int i = 0; i < 5; i++)
    {
        printf("%d : Index me Your Number: ",i);
        scanf("%d",&array[i]);
    }
    for (int  i = 0; i < 5; i++)
    {
    k=check(array[i]);
    if (k == array[i])
    {
        printf("\n %d is an Armstrong number.", array[i]);
    } 
    }
}

int check(int x)
{
    int n, remainder, result, digits,j,i;
    result=0;
    digits=0;
        for (i = x; i > 0; i = i / 10) 
    {
        digits++;
    }

    for (j = x ; j> 0 ; j= j/ 10)
    
     {
        remainder = j % 10;  
        result =result+ pow(remainder, digits); 
    }
    return(result);
}

/*~~~ output 
0 : Index me Your Number: 10
1 : Index me Your Number: 123
2 : Index me Your Number: 153
3 : Index me Your Number: 1
4 : Index me Your Number: 2

 1 is an Armstrong number.
 2 is an Armstrong number.
 
 */