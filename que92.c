/* WAP to input a number and check it is Palindrome number or not a number is called 
Palindrome of revers of the number equal to be number it self for EX = 22.*/

#include <stdio.h>
#include<conio.h>

int main()
{
    int n,i, new,rev, rem;
    rev=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i=n; i > 0; i = i / 10)
     {
        rem = i % 10;         
        rev = rev * 10 + rem; 
    }
    if (n == rev)
     {
        printf( "\n%d is a Palindrome number.",n);
    } 
    else
     {
        printf("\n %d is not a Palindrome number.",n);
    }
}
