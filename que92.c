<<<<<<< HEAD
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

    return 0;
}
=======
/* WAP to input a number and check it is Palindrome number or not a number is called 
Palindrome of revers of the number equal to be number it self for EX = 22.*/

#include <stdio.h>
#include<conio.h>

int main()
{
    int n, new,rev, rem;
    rev=0;

    printf("Enter a number: ");
    scanf("%d", &n);
    new = n;   // 'new' naam ka ek or is liya hai jisse if-else me jo 'n' ki value ho gi bo for ke baje se change ho jayeegi isliye show karne ke liye hum ne phake se he ek value ne n ki value dal di ....

    for (; n != 0; n = n / 10)
     {
        rem = n % 10;         
        rev = rev * 10 + rem; 
    }
    if (new == rev)
     {
        printf( "\n%d is a Palindrome number.", new);
    } 
    else
     {
        printf("\n %d is not a Palindrome number.", new);
    }

    return 0;
}
>>>>>>> 2d7c4a7595c9e06094366219d96ea287f5bec18c
