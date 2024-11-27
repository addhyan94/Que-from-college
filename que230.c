//                              usning Arrays With Functions 

/*WAP to input 10 elements into an array and print the frequency of each element.*/

#include<stdio.h>
#include<conio.h>
int main()
{
 int array[10],store[10];
 for (int i = 0; i < 10; i++)
{
    printf("%d : Inder || Enter Elements : ",i);
    scanf("%d",&array[i]);
}
 int c;
  for (int j = 0; j < 10; j++)
{
    c=0;
    
 for (int i = 0; i < 10; i++)
 { 
    if (array[j]==array[i])
    {
        c++;
    }
 }
 store[j]=c;
 }
 for (int k = 0; k < 10; k++)
 {
 printf("\n frequency of %d is %d ",array[k],store[k]);
 }

}

/*~~~Output-
0 : Inder || Enter Elements : 1
1 : Inder || Enter Elements : 2
2 : Inder || Enter Elements : 1
3 : Inder || Enter Elements : 2
4 : Inder || Enter Elements : 3
5 : Inder || Enter Elements : 1
6 : Inder || Enter Elements : 4
7 : Inder || Enter Elements : 5
8 : Inder || Enter Elements : 6
9 : Inder || Enter Elements : 7

 frequency of 1 is 3
 frequency of 2 is 2
 frequency of 3 is 1
 frequency of 4 is 1
 frequency of 5 is 1
 frequency of 6 is 1
 frequency of 7 is 1

*/