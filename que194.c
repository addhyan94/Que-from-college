/*WAP to input a number and check it is buzz number or not using function.*/
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
    if (n % 7 == 0 || n % 10 == 7) 
    {
        printf("\n %d is a Buzz number", n);
    }
     else
    {
        printf("\n %d is not a Buzz number", n);
    }
}
