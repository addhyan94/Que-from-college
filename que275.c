//              Recursion In function 
// WAP to input a number and calulate sum of factor using recursion.
#include<stdio.h>
#include<conio.h>
int sum(int, int);
void main()
{
    int n,s;
    printf("Enter a number: ");
    scanf("%d",&n);
    s=sum(n,1);
    printf("\n The Sum of Factors : %d",s);
}
int sum(int x, int i)
{
    if (i > x)
    {
        return 0;
    } 

    if (x % i == 0)
    {
        return i + sum(x, i + 1);
    }

    return sum(x, i + 1); 
}

/*~~~Output 
Enter a number: 12
The Sum of Factors : 28

*/