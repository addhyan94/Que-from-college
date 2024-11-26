//                  String 
/* WAP to input a string calculate length of string. */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char array[50];
    printf("Enter a String: ");
    gets(array);
    int i=0;
    while (array[i]!='\0')
    {
        i++;
    }
    printf(" length of string : %d ",i);
}

/*~~Output-
Enter a String: shubh
 length of string : 5

 */