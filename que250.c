//                  String 
/* WAP to input a string and print in the given formate 
Input sting city Output String 
c
ci
cit
city     */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
 {
    char a[50];
    int i, j, l;
    printf("Enter a string: ");
    gets(a);
    l = strlen(a);
    for (i = 0; i < l; i++)
    {
        for (j = 0; j <= i; j++) 
        {
            printf("%c", a[j]); 
        }
        printf("\n");
    }
}
