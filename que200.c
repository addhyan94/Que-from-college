/*WAP to input a number and cound number of digits using function . */
#include <stdio.h>
#include <conio.h>
void count(int);
int main() 
{
    int n;
    printf("\n Enter a number: ");
    scanf("%d", &n);
    count(n);
}

void count(int n)
 {
    int count = 0;
    while (n != 0) 
    {
        n =n/ 10;
        count++;
    }
    printf("\n Number of digits: %d",count);
}
