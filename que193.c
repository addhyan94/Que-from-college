/* WAP to input a number and check it is evenn or odd using function .*/

#include <stdio.h>
#include <conio.h>
void check(int);
int main()
 {
    int n;
    printf("\n Enter a number: ");
    scanf("%d", &n);
    check(n);
}

void check(int n)
 {
    if (n%2==0) 
    {
        printf("\n %d is Even Number ", n);
    } 
    else
     {
        printf("\n %d is Odd Number ", n);
    }
}
