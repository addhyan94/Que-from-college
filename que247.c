//                  String 
/*WAP to input a string and calculate length of longest word For Ex-> If string is this is Jhansi City , Length of longest Word is 6.*/

#include <stdio.h>
#include<conio.h>
#include <string.h>
void main() 
{
    char a[50];
    int max_l = 0, l = 0;
    printf("Enter a string: ");
    gets(a);
    int i = 0;
    while ( a[i] != '\0') 
    {
        if (a[i] == ' ' || a[i] == '\0')
         {
            if (l > max_l)
             {
                max_l = l;
            }
            l = 0; 
        } 
        else 
        {
            l++; 
        }
     i++;
    }
    if (l > max_l) 
    {
        max_l = l;
    }
    printf("Length of the longest word is: %d ", max_l);
}

/*~~Output- 
Enter a string: this is jhansi city
Length of the longest word is: 6

*/